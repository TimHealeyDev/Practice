/*
	
	URLify: Write a method to replace all spaces in a string with %20.

	Assumptions:
	- Empty string will return an empty string
	- The string has sufficient space for additional characters
	- The input contains the 'true' length of the string (without the additional space)

*/
#include <string>
#include <vector>

using namespace std;

string URLify(string in, int length){

	// check there is room for any spaces
	if (length < 2){
		return in;
	}

	string temp = "";
	vector<string> words;

	for (int i = 0; i < length; i++){

		// delimit on space, add temp word to word list and reset
		if (in[i] == ' '){
			if (temp.size() > 0){
				words.push_back(temp);
			}
			temp = "";
		}
		// add char to temp word
		else{
			temp += in[i];
		}
	}

	// append final temp word
	words.push_back(temp);


	string ret = words[0];

	// append %20 to all words after the first
	for (int i = 1; i < words.size(); i++){
		ret += "%20";
		ret += words[i];
	}

	return ret;
}