/*
	
	Remove Dups: Write code to remove duplicates from an unsorted linked list.
	How would you solve this if a temporary buffer is not allowed?

	Assumptions:
	- The linked list is singly linked
	- Node data is in the form of int
	
*/

#include "LinkedListNode.cpp"

void RemoveDups(LinkedList list){

	Node currentNode = list.getHead();

	while (currentNode != NULL){

		int data = currentNode.data;

		Node tempNode = currentNode;

		while (tempNode.next){

			if (tempNode.next.data == data){
				tempNode.next = tempNode.next.next;
			}
			else{
				tempNode = tempNode.next;
			}
		}

		currentNode = currentNode.next;
	}

	return;
}

/*
	This approach does not require a temp buffer, and therefore is O(1) Space complexity.
	However, it is O(n^2) Time complexity. To improve this we would need to introduce another data structure.
	If we use a hashmap to store which data values we have seen so far, then remove any nodes whose data values
	already exist in the hashmap, we can pass through the linked list only once. Running in O(n) Time complexity.

*/
