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

int get_length_linkedlist(struct NexaScaleNode *head) {
    int count = 0;

    if (head == NULL) {
        printf("LinkedList is empty!");
    }

    struct NexaScaleNode *itr = NULL;

    itr = head;

    while (itr != NULL) {
        count++;
        itr = itr->next;
    }

    printf("Length of LinkedList is %d\n", count);

}



//Entry point of code
int main() {

    // head is the pointer to the first node
    struct NexaScaleNode *head = NULL;

    // This line of code creates a NexaScaleNode instance of a node and returns the address to the variable head
    head = (struct NexaScaleNode *)malloc(sizeof(struct NexaScaleNode));

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
    get_length_linkedlist(head);

    return 0;
}


