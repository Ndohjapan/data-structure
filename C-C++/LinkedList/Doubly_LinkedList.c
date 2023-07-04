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

// Creating node of the Doubly linkedlist
int main()
{
    struct node *head = NULL;
    head = addToEmpty(head, 45);
    printf("%d\n", head->data);
    return 0;
}