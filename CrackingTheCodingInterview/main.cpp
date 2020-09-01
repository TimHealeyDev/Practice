#include <iostream>
#include <stdlib.h>
#include "1-9_StringRotation.cpp"

using namespace std;

int main(){
	
	string s;
	string c;
	int i;
	cout << "In 1: ";
	getline(cin, s);
	cout << "In 2: ";
	getline(cin, c);
	cout << endl;

	cout << "isRotated: " << StringRotation(s, c) << endl;

	return 0;
}