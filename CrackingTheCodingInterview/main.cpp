#include <iostream>
#include "1-2_checkPermutation.cpp"

using namespace std;

int main(){
	
	string s, s2;
	cout << "In 1: ";
	getline(cin, s);
	cout << "In 2: ";
	getline(cin, s2);
	cout << endl;

	cout << "Out: " << checkPermutation(s,s2) << endl;

	return 0;
}