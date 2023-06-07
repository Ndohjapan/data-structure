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



// Function to add node at beginning of linkedlist
void add_at_beginning(struct NexaScaleNode **head, int data)
{
    // create the new node
    struct NexaScaleNode *temp;
    temp = (struct NexaScaleNode *)malloc(sizeof(struct NexaScaleNode));
    temp->data = data;
    temp->next = NULL;
    

    temp -> next = *head;
    *head = temp;

}

// Function to add node at end of linkedlist
struct NexaScaleNode *add_at_end(struct NexaScaleNode *head, int data) {

    // itr would traverse the linkedlist while temp would hold the new node
    struct NexaScaleNode *itr, *temp; 
    itr = head;

    temp = (struct NexaScaleNode *)malloc(sizeof(struct NexaScaleNode));
    temp -> data = data;
    temp->next = NULL;

    while (itr->next != NULL) {
        itr = itr -> next;
    }
    itr -> next = temp;
    return head; 

}


// Function to get length of linkedlist
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
    return count;

}


// Function to add node at any index
void add_at_index(struct NexaScaleNode **head, int data, int index) {

    //Pointer to traverse linkedlist
    struct NexaScaleNode *itr = *head;

    // Create Node to be added
    struct NexaScaleNode *itr2 = (struct NexaScaleNode *)malloc(sizeof(struct NexaScaleNode));
    itr2 -> data = data;
    itr2 -> next = NULL;


    int count = 0;
    while (itr != NULL) {
        if (count == index - 1) {
            itr2 -> next = itr -> next;
            itr-> next = itr2;
            break;
        }
        itr = itr -> next;
        count++;
    }
}

void remove_at_index(struct NexaScaleNode **head, int index) {
    
    if (index < 0 || index >= get_length_linkedlist(*head)) {
        printf("Please enter a valid index!\n");
        return;
    }

    struct NexaScaleNode *itr = *head;
    int count = 0;

    while (itr != NULL) {    
        if (count  == index - 1) {
            itr -> next = itr -> next -> next;  // Potential Memory leakage and Segmentation Fault
            break;
        }
        itr = itr -> next;
        count++;
    }
}


struct NexaScaleNode *delete_entire_node(struct NexaScaleNode *head) {

    struct NexaScaleNode *temp;

    temp = head;

    while (temp != NULL) {
        temp = temp->next;
        free(head);
        head = temp;
    }
    return head;
}


struct NexaScaleNode *reverse_nodes(struct NexaScaleNode *head) {

    // prev and next pointers are used to traverse linkedlist.
    struct NexaScaleNode *prev = NULL;
    struct NexaScaleNode *next = NULL;

    while (head != NULL) {
        next = head -> next; 
        head -> next = prev;
        prev = head;
        head = next;
    }
    head = prev;
    return head;

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
    add_at_beginning(&head, 2);
    print_linkedlist(head);
    get_length_linkedlist(head);
    head = add_at_end(head, 5);
    print_linkedlist(head);
    get_length_linkedlist(head);
    add_at_index(&head, 15, 2);
    print_linkedlist(head);
    remove_at_index(&head, 9);
    print_linkedlist(head);
    get_length_linkedlist(head);
    head = reverse_nodes(head);
    print_linkedlist(head);
    // head = delete_entire_node(head);
    // if (head == NULL) {
    //     printf("Linked list deleted successfully!\n");
    // }
    // else {
    //     printf("failed\n");
    // }
    // return 0;
}


