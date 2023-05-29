// A C program that creates a LinkedList

#include <stdio.h>
#include <stdlib.h>

//  Create a self referential struct for the class of the node
struct NexaScaleNode {
    int data;
    struct NexaScaleNode *next;
};


// Function to print Linkedlist
void print_linkedlist(struct NexaScaleNode *head) // Function accepts address of first node
{

    if (head == NULL)
    {
        printf("LinkedList is empty!");
        
    }

    // New struct pointer to host address of first node
    struct NexaScaleNode *itr = NULL;

    //itr variable now holds the address of the first node
    itr = head;

    while (itr != NULL)
    {
        printf("%d->", itr->data);
        itr = itr->next;
    }
    printf("END\n");
}



//Entry point of code
int main() {

    struct NexaScaleNode *head = NULL;

    head = (struct NexaScaleNode *)malloc(sizeof(struct NexaScaleNode)); //address to the first node

    if (head == NULL) {
        printf("Memory is empty!");
        exit(1);
    }

    head -> data = 1;
    head -> next = NULL;

    // Adding another node to the LinkedList
    struct NexaScaleNode *current = (struct NexaScaleNode *)malloc(sizeof(struct NexaScaleNode)); // address to the second node

    if (current == NULL)
    {
        printf("Memory is empty!");
        exit(1);
    }

    current -> data = 4;
    current -> next = NULL;
    head -> next = current;

    //Adding third node to the LinkedList
    current = (struct NexaScaleNode *)malloc(sizeof(struct NexaScaleNode)); // address to the third node
    current -> data = 8;
    current -> next = NULL;

    head -> next -> next = current;

    print_linkedlist(head);   // head is an address to the first node

    return 0;
}


