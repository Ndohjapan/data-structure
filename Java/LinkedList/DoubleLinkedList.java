class DLL{

    private Node head;
    private Node tail;
    private int size;

    class Node{
        private int value;
        private Node next;
        private Node prev;

        public Node(int value){
            this.value = value;
        }

        public Node(int value, Node next){
            this.value = value;
            this.next = next;
        }

        public Node(int value, Node next, Node prev){
            this.value = value;
            this.next = next;
            this.prev = prev;
        }
    }

    public void insertHead(int value){
        Node node = new Node(value);

        node.next = head;
        if(head != null){
            head.prev = node;
        }
        head = node;

        if(tail == null){
            tail = head;
        }

        size += 1;
        
    }

    public void insertTail(int value){
        Node node = new Node(value);

        if(tail == null){
            insertHead(value);
            return;
        }

        node.prev = tail;

        tail.next = node;

        tail = node;
        
        size += 1;

        return;
    }

    public void insert(int value, int index){
        if(index == size){
            insertTail(value);
            return;
        }

        if(index == 0){
            insertHead(value);
            return;
        }

        Node temp = head;

        for (int i = 0; i < index - 1; i++) {
            temp = temp.next;
        }
        
        if (temp == null) {
            System.out.println("does not exist");
            return;
        }

        Node node = new Node(value);
        node.next = temp.next;
        temp.next = node;
        node.prev = temp;
        if (node.next != null) {
            node.next.prev = node;
        }
        
        size += 1;

        return;

    }

    public void displayList(){
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.value + " -> ");
            temp = temp.next;
        }
        System.out.println("END");
    }

    public void reverseDisplayList(){
        Node temp = tail;
        while (temp != null) {
            System.out.print(temp.value + " <- ");
            temp = temp.prev;
        }
        System.out.println("START");
    }

}


public class DoubleLinkedList {
    public static void main(String[] args) {
        DLL list = new DLL();

        list.insertHead(4);
        list.insertHead(5);
        list.insertTail(7);
        list.insert(10, 2);
        list.insert(3, 3);
        list.insert(2, 1);
        list.displayList();
        list.reverseDisplayList();
    }
}
