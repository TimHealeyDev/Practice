#include <iostream>
#include <stdlib.h>
#include "1-7_RotateMatrix.cpp"

using namespace std;

int main(){
	
	string s;
	string c;
	int i;
	/*cout << "In 1: ";
	getline(cin, s);
	cout << "In 2: ";
	getline(cin, c);
	cout << endl;*/

	vector<int> row;
	int n = 4;
	vector< vector<int> > mat;

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			row.push_back(rand() % 100);
		}

		mat.push_back(row);
		row.clear();
	}

	for (int i = 0; i < mat.size(); i++){
		for (int j = 0; j < mat[i].size(); j++){
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Swapped: " << RotateMatrix(mat) << endl;

	return 0;
}