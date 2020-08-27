/*
	
	One Away: Three types of edits can be made to strings: insert a character, remove a character, or replace a character.
	Given two strings, write a function to determine if they are one (or zero) edits away from each other.

	Assumptions:
	- Empty strings are considered in this scenario (any empty and 1 char string returns true)
	- 

*/
#include <string>
#include <cmath>

using namespace std;

bool OneAway(string s1, string s2){

	int sizeDiff = abs(s1.size() - s2.size());

	if (sizeDiff > 1){
		return false;
	}

	int editCount = 0;
	// for cases of same length, check if only 1 (or less) char needs replacing
	if (sizeDiff == 0){
		for (int i = 0; i < s1.size(); i++){
			if (s1[i] != s2[i]){
				editCount++;
				if (editCount > 1){
					return false;
				}
			}
		}
	}
	// for cases of a single char size diff, remove 1 char to try and replicate the smaller string
	else{
		int j = 0;
		if (s1.size() > s2.size()){
			for (int i = 0; i < s1.size(); i++){
				if (s1[i] != s2[j]){
					editCount++;
					i++;
					if (s1[i] != s2[j] || editCount > 1){
						return false;
					}
				}

				j++;
			}
		}
		else{
			for (int i = 0; i < s2.size(); i++){
				if (s2[i] != s1[j]){
					editCount++;
					i++;
					if (s2[i] != s1[j] || editCount > 1){
						return false;
					}
				}

				j++;
			}
		}
	}

	return true;
}

