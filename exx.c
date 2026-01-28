#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *queue = NULL; // Pointer to the queue array
int front = -1; // Front of the queue
int rear = -1; // Rear of the queue
int capacity = 0; // Capacity of the queue

void enqueue(int value) {
    capacity++;
    queue = realloc(queue, capacity * sizeof(int));
    rear++;
    queue[rear] = value;
}

void dequeue() {
    if (front == rear) {
        printf("Queue is empty. Cannot dequeue.\n");
        return;
    }
    printf("Dequeued item: %d\n", queue[++front]);
    if (front == rear) {
        free(queue);
        queue = NULL;
        capacity = 0;
    }
}

void printQueue() {
    printf("Queue: ");
    if (capacity == 0) {
        printf("Empty\n");
        return;
    }
    for (int i = front + 1; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    char command[10];
    int value;

    // Ensure space for 0 items at the beginning
    queue = malloc(0);

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
