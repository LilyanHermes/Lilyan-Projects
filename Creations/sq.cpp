#include <iostream>
#include "sq.h"

using namespace std;

void push(Node*& head, int d) {
    Node* newNode = new Node;
    newNode->data = d;
    newNode->next = head;
    head = newNode;
}

void pop(Node*& head) {
    if (head == nullptr) {
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

void enqueue(Node*& head, int d) {
    Node* newNode = new Node;
    newNode->data = d;
    newNode->next = nullptr;
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void dequeue(Node*& head) {
    if (head == nullptr) {
        cout << "Queue underflow" << endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
