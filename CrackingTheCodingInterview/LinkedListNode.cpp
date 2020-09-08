#include <iostream>

struct Node {
	int data;
	struct Node *next;
};

class LinkedList {
private:

	Node *head;
	Node *tail;

public:

	LinkedList(){
		head = NULL;
		tail = NULL;
	}

	Node getHead(){
		return *head;
	}

	void append(int d){

		Node *end = new Node;
		end->data = d;
		end->next = NULL;

		if (head == NULL){
			head = end;
			tail = end;
		}
		else{
			tail->next = end;
			tail = tail->next;
		}
	}

	void printList(){
		Node *temp = new Node;
		temp = head;

		while (temp){
			std::cout << temp->data << ", ";
			temp = temp->next;
		}

		std::cout << std::endl;
		return;
	}
};