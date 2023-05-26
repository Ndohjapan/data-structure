class Node{
    int data;
    Node next;
    Node(int data){
        this.data = data;
    }
}

public class LengthOfLinkedList {
    public static void main(String[] args) {
        Node head = new Node(4);
        Node nodeB = new Node(3);
        Node nodeC = new Node(10);
        Node nodeD = new Node(2);
        Node nodeE = new Node(5);
        Node nodeF = new Node(4);
        Node nodeG = new Node(7);

        head.next = nodeB;
        nodeB.next = nodeC;
        nodeC.next = nodeD;
        nodeD.next = nodeE;
        nodeE.next = nodeF;
        nodeF.next = nodeG;

        int counter = 1;

        while(head.next != null){
            counter += 1;
            head.next = head.next.next;
        }

        System.out.print(counter);
    }
}
