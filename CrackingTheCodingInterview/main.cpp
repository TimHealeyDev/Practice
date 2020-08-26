#include <iostream>
#include "1-4_PalindromePermutation.cpp"

using namespace std;

int main(){
	
	string s;
	string c;
	int i;
	cout << "In 1: ";
	getline(cin, s);
	/*cout << "In 2: ";
	getline(cin, c);*/
	cout << endl;

	cout << "Out: " << PalindromePermutation(s) << endl;

	return 0;
}