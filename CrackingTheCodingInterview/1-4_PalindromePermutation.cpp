/*
	
	Palindrome Permutation: Given a string, write a function to check if it is a permuation of a palindrome.

	Assumptions:
	- Strings with less than 2 chars are false, since:
		* Empty strings aren't valid
		* 1 Char strings can't be permutated
	- ASCII character set is used
	- Palindromes are not space or case sensitive, e.g. "Taco cat" doesn't need to be written "tac o cat" 

*/
#include <string>
#include <vector>
#include <ctype.h>


using namespace std;

bool PalindromePermutation(string in){

	if (in.size() < 2){
		return false;
	}

	int charCount = 0;
	vector<int> counter(128, 0);
	char c;

	for (int i = 0; i < in.size(); i++){

		// skip whitespace
		if (in[i] == ' '){
			continue;
		}

		// count occurrences of char (non-case-sensitive)
		c = tolower(in[i]);
		counter[c]++;
		charCount++;
	}

	// if there is an even number of characters
	// then all character counts must be even
	if (charCount % 2 == 0){

		for (int i = 0; i < counter.size(); i++){
			if (counter[i] % 2 == 1){
				return false;
			}
		}
	}
	// if there is an odd number of characters
	// then all-but-one character count must be even
	else{
		int oddCount = 0;

		for (int i = 0; i < counter.size(); i++){
			if (counter[i] % 2 == 1){
				oddCount++;

				if (oddCount > 1){
					return false;
				}
			}
		}
	}

	return true;
}


/*

	Improvements:
	- Instead of counting all character occurrences, use a bitarray and flip the bit each time we encounter the character
	- The bitarray value will be 0 when encountered even number of times, 1 when encountered odd number of times.
	- Using this we can check to make sure the sum of the bitarray is 0 for even character counts and 1 for odd character counts.