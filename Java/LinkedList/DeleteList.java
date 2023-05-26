class LL{

    private Node head;
    private Node tail;
    private int size;

    class Node{
        private int value;
        private Node next;

        public Node(int value){
            this.value = value;
        }

        public Node(int value, Node next){
            this.value = value;
            this.next = next;
        }
    }

    
    public Node get(int index) {
        Node node = head;
        for (int i = 1; i < index; i++) {
            node = node.next;
        }
        return node;
    }

    public void insertHead(int value) {
        Node node = new Node(value);

        node.next = head;

        head = node;

        if(tail == null){
            tail = head;
        }

        size += 1;
    }

    public void deleteHead(){
        head = head.next;
        
        if(head == null){
            tail = null;
        }

        size--;

    }

    public void deleteTail(){
        if (size <= 1) {
            deleteHead();
            return;
        }
        Node secondLast = get(size - 1);

        tail = secondLast;
        tail.next = null;

        size--;
    }

    public void delete(int index){
        if (index == 0) {
            deleteHead();
            return;
        }
        if (index == size - 1) {
            deleteTail();
            return;
        }
        Node prevNode = get(index - 1);

        prevNode.next = prevNode.next.next;

        size--;

        return;
        
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

public class DeleteList {
    public static void main(String[] args) {
        LL list = new LL();

        list.insertHead(10);
        list.insertHead(0);
        list.insertHead(5);
        list.insertHead(3);
        list.insertHead(2);
        list.insertHead(7);

        list.display();

        list.deleteHead();

        list.display();

        list.deleteTail();
        list.display();

        list.delete(2);
        list.display();
    }
}
