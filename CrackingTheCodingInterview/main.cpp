#include <iostream>
#include "1-3_URLify.cpp"

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

	cout << "Out: " << URLify("Mr John Smith   ",13) << endl;

	return 0;
}