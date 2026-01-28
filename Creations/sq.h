#ifndef SQ_H
#define SQ_H

struct Node {
    int data;
    Node* next;
};

void push(Node*& head, int d);
void pop(Node*& head);
void enqueue(Node*& head, int d);
void dequeue(Node*& head);
void printList(Node* head);

#endif // SQ_H
