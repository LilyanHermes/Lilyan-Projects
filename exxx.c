#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *queue = NULL; // Pointer to the queue array
int front = -1;    // Front of the queue
int rear = -1;     // Rear of the queue
int capacity = 0;  // Capacity of the queue

void enqueue(int value) {
    // If the queue is empty, allocate memory for one element
    if (capacity == 0) {
        capacity = 1;
        queue = malloc(capacity * sizeof(int));
        front = rear = 0;
    } else {
        // If the queue is not empty, reallocate memory to accommodate one more element
        capacity++;
        queue = realloc(queue, capacity * sizeof(int));
        rear++;
    }
    queue[rear] = value;
}

void dequeue() {
    if (front == -1) {
        printf("Queue is empty. Cannot dequeue.\n");
        return;
    }
    printf("Dequeued item: %d\n", queue[front++]);
    // If front becomes equal to rear after dequeueing, reset front and rear to -1
    if (front > rear) {
        free(queue);
        queue = NULL;
        front = rear = -1;
        capacity = 0;
    }
}

void printQueue() {
    printf("Queue: ");
    if (capacity == 0) {
        printf("Empty\n");
        return;
    }
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    char command[10];
    int value;

    while (1) {
        printQueue();
        printf("Enter command (enqueue, dequeue, quit): ");
        scanf("%s", command);

        if (strcmp(command, "enqueue") == 0) {
            printf("Enter value to enqueue: ");
            scanf("%d", &value);
            enqueue(value);
        } else if (strcmp(command, "dequeue") == 0) {
            dequeue();
        } else if (strcmp(command, "quit") == 0) {
            // Free memory before quitting
            if (queue != NULL) {
                free(queue);
            }
            break;
        } else {
            printf("Invalid command.\n");
        }
    }

    return 0;
}
