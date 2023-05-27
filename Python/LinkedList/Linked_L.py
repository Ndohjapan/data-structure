# Linked list is an improvement on arrays that links data together by storing the data and the
# address of the next data or value, the last data has an address of None.


#Create a class for the node.
class Node:
    """ Class that defines the node
    
    Args:
        data: The number or data in the node
        next: reference to the next node.
    """
    def __init__(self, data=None, next=None):
        self.data = data
        self.next = next


#Class for LinkedList
class LinkedList:
    def __init__(self):
        self.head = None


    def add_at_beginning(self, data):
        """Method to add a node to the beginning of the Linked List
        
        Args:
            data: This is the number to be added to the node.

            self.head: reference to the next node which is None because
            it is the only node in the LinkedList and doesnt point to
            any node.
        """
        node = Node(data, self.head)
        self.head = node


    def print_LinkedList(self):
        """Method to print the content of the Linked List"""
        if self.head == None:
            print("Linked List is Empty!")

        itr = self.head
        content = ""

        while itr:
            content += str(itr.data) + " "
            itr = itr.next

        print(content)


