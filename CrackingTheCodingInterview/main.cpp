#include <iostream>
#include <stdlib.h>
#include "1-8_ZeroMatrix.cpp"

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
	int n = 8;
	vector< vector<int> > mat;

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			row.push_back(rand() % 100);
		}

		mat.push_back(row);
		row.clear();
	}



	mat[0][2] = 0;
	mat[1][3] = 0;
	mat[0][7] = 0;


	for (int i = 0; i < mat.size(); i++){
		for (int j = 0; j < mat[i].size(); j++){
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Zeroed: " << endl;
	mat = ZeroMatrix(mat);

	for (int i = 0; i < mat.size(); i++){
		for (int j = 0; j < mat[i].size(); j++){
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}