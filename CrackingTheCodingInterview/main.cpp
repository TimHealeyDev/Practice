#include <iostream>
#include "1-5_OneAway.cpp"

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

	cout << "Out: " << OneAway(s, c) << endl;

	return 0;
}