/*
	
	Zero Matrix: Write an algorithm such that if an element in an MxN matrix is 0,
	its entire row are set to 0.

	Assumptions:
	- Return empty matrices
	- Matrix values are integers

	
*/
#include <vector>

using namespace std;

vector<vector<int> > ZeroMatrix(vector<vector<int> > matrix){

	if (matrix.size() < 1){
		return matrix;
	}

	int rows = matrix.size();
	int cols = matrix[0].size();

	// store zero flags for rows and cols in bitsets of size M and N
	vector<bool> zeroRows(rows, 0);
	vector<bool> zeroCols(cols, 0);

	// iterate through the whole matrix and set 0 flags
	for (int row = 0; row < rows; row++){
		for (int col = 0; col < cols; col++){

			if (matrix[row][col] == 0){
				zeroRows[row] = true;
				zeroCols[col] = true;
			}
		}
	}

	// re-iterate through matrix to set rows and cols as 0
	for (int row = 0; row < rows; row++){
		for (int col = 0; col < cols; col++){

			if (zeroRows[row] || zeroCols[col]){
				matrix[row][col] = 0;
			}
		}
	}

	return matrix;
}