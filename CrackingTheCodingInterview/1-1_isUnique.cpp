/*
	
	Is Unique: Implement an algorithm to determine if a string has all unique characters.

	Assumptions:
	- We'll consider lower and upper-case of the same letter unique (if not, we would simply convert each char to lowercase with std library tolower() function)
	- Only considering ASCII characters
	- Empty string will return false

*/
#include <string>
#include <vector>

using namespace std;

bool isUnique(string in){
	
	if (in.size() < 1){
		return false;
	}
	
	vector<int> characters(128, 0); // initialize ASCII indices to 0

	// for each char of input
	for (int i = 0; i < in.size(); i++){

		characters[in[i]]++;

		// if a char is encountered more than once, string is not unique
		if (characters[in[i]] > 1){
			return false;
		}
	}

	return true;
}

