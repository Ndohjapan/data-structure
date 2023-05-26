class LL{

    private Node head;
    private Node tail;
    private int size;

    class Node{
        private int value;
        private Node next;
    
        public Node (int value){
            this.value = value;
        }
    
        public Node(int value, Node next){
            this.next = next;
            this.value = value;
        }
    }

    public LL(){
        this.size = 0;
    }

    public void insertFirst(int value){
        Node node = new Node(value);

        // next node changes to previous head node
        node.next = head;

        // new node becomes the head value
        head = node;

        // If there is no value at the tail, then set the tail to the new node
        if(tail == null){
            tail = head;
        }

        // constantly increase the size of the list to keep track
        size += 1;
    }

    public void insertLast(int value){

        if(tail == null){
            insertFirst(value);
            return;
        }

        // By default the node next value will be null
        Node node = new Node(value);

        // set the current tail to have its next to new node
        tail.next = node;

        // Set the new node as tail
        tail = node;

        size += 1;

    }

    public void insert(int value, int index){
        if(index == 0){
            insertFirst(value);
            return;
        }

        if(index == size){
            insertLast(value);
            return;
        }

        
        Node temp = head;

        for (int i = 0; i < index - 1; i++) {
            temp = temp.next;
        }
        
        Node node = new Node(value, temp.next);
        
        temp.next = node;

        size++;
    }

    public void display(){
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.value + " -> ");
            temp = temp.next;
        }
        System.out.println("END");
    }
}

public class InsertingIntoLinkedList {

    public static void main(String[] args) {
        LL list = new LL();

        list.insertFirst(10);
        list.insertFirst(0);
        list.insertFirst(2);
        list.insertFirst(7);
        list.insert(13, 0);
        list.insert(15, 4);
        list.insertLast(21);
        list.insert(90, 7);
        list.display();
        


    }


}
