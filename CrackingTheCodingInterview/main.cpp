#include <iostream>
#include <stdlib.h>
#include "2-1_RemoveDups.cpp"

using namespace std;

int main(){
	
	LinkedList l = new LinkedList();
	l.append(3);
	l.append(2);
	l.append(2);
	l.append(7);
	l.append(9);
	l.append(3);
	l.append(2);
	l.append(7);
	l.append(6);

	cout << "Original:" << endl;
	l.printList();

	RemoveDups(n);

	cout << "Dupes Removed:" << endl;
	l.printList();

	return 0;
}