"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
class Node {
    constructor(value, next = undefined) {
        this.value = value;
        this.next = next;
    }
}
class LL {
    constructor() {
        this.size = 0;
        this.head;
        this.tail;
    }
    insertFirst(value) {
        let node = new Node(value);
        node.next = this.head;
        this.head = node;
        if (this.tail == undefined) {
            this.tail = this.head;
        }
        this.size += 1;
    }
    insertLast(value) {
        if (this.tail == undefined) {
            this.insertFirst(value);
            return;
        }
        let node = new Node(value);
        node.next = undefined;
        if (this.tail != undefined) {
            this.tail.next = node;
        }
        this.tail = node;
        this.size += 1;
    }
    insert(value, index) {
        if (index == 0) {
            this.insertFirst(value);
            return;
        }
        if (index == this.size) {
            this.insertLast(value);
            return;
        }
        let temp = this.head;
        for (let i = 0; i < index - 1; i++) {
            if (temp != undefined) {
                temp = temp.next;
            }
        }
        if (temp != undefined) {
            let node = new Node(value, temp.next);
            temp.next = node;
            this.size += 1;
        }
    }
    deleteHead() {
        if (this.head != undefined) {
            this.head = this.head.next;
            if (this.head == undefined) {
                this.tail = undefined;
            }
            this.size -= 1;
        }
    }
    deleteTail() {
        if (this.size <= 1) {
            this.deleteHead();
            return;
        }
        let node = this.head;
        for (let i = 1; i < this.size - 1; i++) {
            if (node != undefined) {
                node = node.next;
            }
        }
        let secondLast = node;
        this.tail = secondLast;
        if (this.tail != undefined) {
            this.tail.next = undefined;
        }
        this.size -= 1;
    }
    delete(index) {
        var _a;
        if (index == 0) {
            this.deleteHead();
            return;
        }
        if (index == this.size - 1) {
            this.deleteTail();
            return;
        }
        let node = this.head;
        for (let i = 1; i < (index - 1); i++) {
            if (node != undefined) {
                node = node.next;
            }
        }
        let prevNode = node;
        if (prevNode != undefined) {
            prevNode.next = (_a = prevNode.next) === null || _a === void 0 ? void 0 : _a.next;
            this.size -= 1;
            return;
        }
    }
    length() {
        let counter = 0;
        let itr = this.head;
        while (itr) {
            counter += 1;
            itr = itr.next;
        }
        console.log(counter);
        return;
    }
    display() {
        let temp = this.head;
        let content = "";
        while (temp != undefined) {
            content += temp.value + " -> ";
            temp = temp.next;
        }
        console.log(content + "END");
    }
}
let linkedList = new LL();
linkedList.insertFirst(3);
linkedList.insertFirst(4);
linkedList.insertFirst(5);
linkedList.insertLast(6);
linkedList.insertLast(9);
linkedList.insertLast(10);
linkedList.display();
linkedList.insert(7, 4);
linkedList.display();
linkedList.deleteHead();
linkedList.deleteTail();
linkedList.display();
linkedList.delete(2);
linkedList.display();
linkedList.length();
