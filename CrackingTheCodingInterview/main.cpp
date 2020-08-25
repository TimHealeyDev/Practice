#include <iostream>
#include "1-1_isUnique.cpp"

using namespace std;

int main(){
	
	string s;
	cout << "In: ";
	getline(cin, s);
	cout << endl;

	cout << "Out: " << isUniqueLessSpace(s) << endl;

	return 0;
}