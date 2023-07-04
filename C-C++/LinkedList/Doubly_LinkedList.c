#include <stdio.h>

// Creating template struct for doubly linkedlist
struct node {
    struct node *prev;
    int data;
    struct node *next;
};

// Creating node of the Doubly linkedlist
int main() {
    struct node *head = malloc(sizeof(struct node));
    head -> prev = NULL;
    head -> data = 10;
    head -> next = NULL;
    return 0;
}