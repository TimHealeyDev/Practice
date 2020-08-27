/*
	
	String Compression: Implement a method to perform basic string compression using the counts of repeated characters.
	For example, the string aabcccccaaa would become a2b1c5a3.
	If the compressed string would not become smaller than the original string, return the original.

	Assumptions:
	- Empty strings and any string with size < 3 (since aa is not shortened with a2) are returned
	- Input string only contains alphabet characters a-z and A-Z
	- Upper and lowercase are treated separately

*/
#include <string>
#include <sstream>

using namespace std;

string StringCompression(string in){

	if (in.size() < 3){
		return in;
	}

	string ret = "";
	char current = in[0];
	int counter = 1;
	stringstream ss;
	string sstr;

	for (int i = 1; i < in.size(); i++){

		if (in[i] == current){
			counter++;
		}
		else{
			ret += current;
			ss << counter;
			sstr = ss.str();
			ret += sstr;
			ss.str("");
			current = in[i];
			counter = 1;
		}
	}

	ret += current;
	ss << counter;
	sstr = ss.str();
	ret += sstr;

	if (ret.size() < in.size()){
		return ret;
	}
	else{
		return in;
	}
}