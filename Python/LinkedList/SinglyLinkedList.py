# Linked list is an improvement on arrays - it allows for more efficient insertion and deletion. 
# It consists of nodes linked together. 
# Each node stores two values: data and the address of the next node. 
# the last node stores an address of None.
# This implementation is for a singly linked list


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
        
        Complexity:
            Time: O(1)
            Space: O(1)
        """
        node = Node(data, self.head)
        self.head = node


    def add_to_the_end(self, data):
        """Method to add node to the end of a Linked List

        Args:
            data: This is the value to be added to the node.
        
        Complexity:
            Time: O(n) where n is the number of elements (nodes) in the linked list
            Space: O(1)
        """

        newnode = Node(data)

        if self.head == None:   # if you add to an empty list, the new node would be made the head
            self.head = newnode
        
        else:
            current = self.head
            
            while (current.next):
                current = current.next

            current.next = newnode


    def print_LinkedList(self):
        """Method to print the content of the Linked List
        
        Complexity:
            Time: O(n) where n is the number of elements (nodes) in the linked list
            Space: O(1)
        """
        if self.head == None:
            print("Linked List is Empty!")

        itr = self.head
        content = ""

        while itr:
            content += str(itr.data) + " "
            itr = itr.next

        print(content)



    def search_node(self, key):
        """This method checks if a value exists in the linked list and returns True 
            otherwise, returns False

            Complexity:
                Time: O(n) where n is the number of nodes in the linked list
                Space: O(1)
        """

        if self.head == None:
            return ("List is empty")

        current = self.head

        while current:
            if current.data == key:
                return True
            
            current = current.next

        return False
            


if __name__ == '__main__':
    LL = LinkedList()

    LL.add_at_beginning(3)

    LL.add_to_the_end(12)
    LL.add_to_the_end(4)
    LL.add_to_the_end(7)

    LL.print_LinkedList()

    print(LL.search_node(4))
    print(LL.search_node(8))

