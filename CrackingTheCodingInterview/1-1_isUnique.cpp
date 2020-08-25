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
	
	// if empty, return false
	if (in.size() < 1){
		return false;
	}
	// if length is greater than available chars, return false
	if (in.size() > 128){
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

/*
	
	Is Unique: What if we cannot use additional data structures?

	There are two options I could think of:
	1. We search the remainder of the string for another occurence of character at i, or
	2. We sort the string and check if any character is next to another copy
*/

bool isUniqueLessSpace(string in){

	// if empty, return false
	if (in.size() < 1){
		return false;
	}
	// if length is greater than available chars, return false
	if (in.size() > 128){
		return false;
	}

	// for each char of input
	for (int i = 0; i < in.size(); i++){

		// search the remainder of the string for a copy of char at i
		for (int j = i+1; j < in.size(); j++){

			if (in[j] == in[i]){
				return false;
			}
		}
	}

	return true;
}