/*
	
	Rotate Matrix: Given an image represented by an NxN matrix, where each pixel in the image is 4 bytes,
	write a method to rotate the image by 90 degrees. Can you do this in place?

	Assumptions:
	- If N < 2, return matrix
	- Any input matrix has to be a square matrix
	- Rotation is in clockwise direction
	- In order to do the rotation in place, we'll need a temp variable for swapping
	- Drawing an example, it can be seen that (for clockwise rotation):
		Each pixel's original y index is now the index for it's x column
		The new y index is N - Original x index
	
*/
#include <vector>

using namespace std;

bool RotateMatrix(vector<vector<int> > matrix){

	int n = matrix.size();

	if (n < 2 || n != matrix[0].size()){
		return false;
	}

	int temp;

	// loop through layers of the matrix
	// e.g. i = 0 is the outer edges, i = 1 is one pixel toward the centre, i = 2 is two pixels in, etc.
	for (int i = 0; i < n / 2; i++){

		int start = i;
		int end = n - 1 - i;
		// loop through each pixel of the layer
		for (int j = start; j < end; j++){
			int offset = j - start;

			temp = matrix[start][j];

			// perform the 4 swaps
			matrix[start][j] = matrix[end - offset][start];
			matrix[end - offset][start] = matrix[end][end - offset];
			matrix[end][end - offset] = matrix[j][end];
			matrix[j][end] = temp;
		}
	}

	cout << "SWAPPED = " << endl;
	for (int i = 0; i < matrix.size(); i++){
		for (int j = 0; j < matrix[i].size(); j++){
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	return true;
}