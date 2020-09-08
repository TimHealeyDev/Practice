
class LinkedListNode {
public:
	LinkedListNode next;
	int data;

	LinkedListNode(int d){
		data = d;
		next = null;
	}

	void append(int d){
		LinkedListNode end = new LinkedListNode(d);
		LinkedListNode n = this;

		while (n.next != NULL) {
			n = n.next;
		}

		n.next = end;
	}
}