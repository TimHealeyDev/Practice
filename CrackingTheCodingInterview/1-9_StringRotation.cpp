/*
	
	String Rotation: Assume you have a method isSubstring() which checks if one word is a substring of another.
	Given two strings, s1 and s2, write code to check if s2 is a rotation of s1 using only one call to isSubstring()

	Assumptions:
	- Return false for strings of differing lengths
	- Return false for strings of length < 1
	- String is ASCII characters
	- Whitespace is significant

	
*/
#include <string>

using namespace std;
bool isSubstring(string str1, string str2){
	if (str1.find(str2) != string::npos){
		return true;
	}
	else{
		return false;
	}
}


bool StringRotation(string s1, string s2){

	// check they are the same size
	if (s1.size() != s2.size()){
		return false;
	}
	// check they aren't empty
	if (s1.size() < 1){
		return false;
	}

	// concatenate s1 with itself to provide buffer for rotation
	string s1s1 = s1 + s1;

	return isSubstring(s1s1, s2);
}