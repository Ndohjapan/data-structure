#include <stdio.h>
#include <stdlib.h>

// Creating template struct for doubly linkedlist
struct node {
    struct node *prev;
    int data;
    struct node *next;
};

// Function to add data to an empty node
struct node *addToEmpty(struct node *head, int data) {

    struct node *temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL) {
        printf("Memory not allocated!");
    }
    temp -> prev = NULL;
    temp -> data = data;
    temp -> next = NULL;
    head = temp;
    return head; // return address to node
}


//Function to insert at the end of Linkedlist
struct node *addToend(struct node *head, int data) {

    struct node *tp = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp -> prev = NULL;
    temp -> data = data;
    temp -> next = NULL;

    while (tp -> next != NULL) {
        tp = tp -> next;
    }
    tp -> next = temp;
    temp->prev = tp;
    return head;
     
}

// Creating node of the Doubly linkedlist
int main()
{
    struct node *head = NULL;
    struct node *ptr;
    head = addToEmpty(head, 45);
    head = addToend(head, 10);
    head = addToend(head, 9);
    ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr -> next;
    }
    printf("\n");
    return 0;
    
}