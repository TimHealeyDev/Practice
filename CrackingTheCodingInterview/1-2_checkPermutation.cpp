/*
	
	Check Permutation: Given two strings, write a method to decide if one is a permutation of the other

	Assumptions:
	- We'll consider lower and upper-case of the same letter unique (if not, we would simply convert each char to lowercase with std library tolower() function)
	- Only considering ASCII characters
	- Empty string will return false
	- Whitespace is significant

*/
#include <string>
#include <vector>

using namespace std;

bool checkPermutation(string s1, string s2){
	
	// if empty, return false
	if (s1.size() < 1 || s2.size() < 1){
		return false;
	}
	// string sizes must match
	if (s1.size() != s2.size()){
		return false;
	}

	vector<int> counters(128, 0); // initialize ASCII indices to 0

	// for each char of s1, add to counter
	for (int i = 0; i < s1.size(); i++){
		counters[s1[i]]++;
	}

	// for each char of s2, remove from counter
	for (int i = 0; i < s2.size(); i++){
		counters[s2[i]]--;
	}

	// if all counters are 0, both strings contain the same chars
	// therefore, they are permutations of each other
	for (int i = 0; i < counters.size(); i++){
		if (counters[i] != 0){
			return false;
		}
	}

	return true;
}