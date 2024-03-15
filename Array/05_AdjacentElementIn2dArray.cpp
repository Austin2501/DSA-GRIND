// Find all adjacent elements of given element in a 2D Array or Matrix
// Adjacent elements are all the elements that share a common side or point i.e., they have a vertical, horizontal or diagonal distance of 1.

/*
Method 1: In this approach, we have to check for all the possible adjacent positions and print them as the adjacent elements of the given elements.
The only problem in this approach is that a possible adjacent position may not be a valid position of the matrix, i.e., the index may be out of bound for the 2-dimensional array. So we have to keep checking for every adjacent position if that is a valid position or not.
*/

// C++ code to implement the approach TC - O(1) SC-O(1)

// #include <bits/stdc++.h>
// using namespace std;

// // Function to check whether
// // position is valid or not
// bool isValidPos(int i, int j, int n, int m)
// {
// 	if (i < 0 || j < 0 || i > n - 1 || j > m - 1)
// 		return 0;
// 	return 1;
// }

// // Function that returns all adjacent elements
// vector<int> getAdjacent(vector<vector<int> >& arr, int i,
// 						int j)
// {
// 	// Size of given 2d array
// 	int n = arr.size();
// 	int m = arr[0].size();

// 	// Initialising a vector array
// 	// where adjacent element will be stored
// 	vector<int> v;

// 	// Checking for all the possible adjacent positions
// 	if (isValidPos(i - 1, j - 1, n, m))
// 		v.push_back(arr[i - 1][j - 1]);
// 	if (isValidPos(i - 1, j, n, m))
// 		v.push_back(arr[i - 1][j]);
// 	if (isValidPos(i - 1, j + 1, n, m))
// 		v.push_back(arr[i - 1][j + 1]);
// 	if (isValidPos(i, j - 1, n, m))
// 		v.push_back(arr[i][j - 1]);
// 	if (isValidPos(i, j + 1, n, m))
// 		v.push_back(arr[i][j + 1]);
// 	if (isValidPos(i + 1, j - 1, n, m))
// 		v.push_back(arr[i + 1][j - 1]);
// 	if (isValidPos(i + 1, j, n, m))
// 		v.push_back(arr[i + 1][j]);
// 	if (isValidPos(i + 1, j + 1, n, m))
// 		v.push_back(arr[i + 1][j + 1]);

// 	// Returning the vector
// 	return v;
// }

// // Driver Code
// int main()
// {
// 	// Given vector array
// 	vector<vector<int> > arr{ { 1, 2, 3 },
// 							{ 4, 5, 6 },
// 							{ 7, 8, 9 } };
// 	int x = 1, y = 1;

// 	// Function call
// 	vector<int> ans = getAdjacent(arr, x, y);

// 	// Print all the adjacent elements
// 	for (int i = 0; i < ans.size(); i++) {
// 		cout << ans[i] << " ";
// 	}
// 	return 0;
// }

/*
Method 2: In this approach, we will not check for every adjacent element whether it is a valid position or not, we will directly code in a way that it will only print the valid elements.

We will iterate using two loops, where the outer loop denotes deviation in row number and the inner loop denotes deviation in column number. The deviation is in the range of -1 to 1 and gets adjusted based on the provided position.
Here is only one special case: if both the deviations are 0 then it denotes the same element.
TC - O(1)
SC- O(1)
*/

// C++ code to implement the approach

#include <bits/stdc++.h>
using namespace std;

// Function that returns all the adjacent elements
vector<int> getAdjacent(vector<vector<int> >& arr, int i,
						int j)
{
	// Size of given 2d array
	int n = arr.size();
	int m = arr[0].size();

	// Initialising a vector array where
	// adjacent elements will be stored
	vector<int> v;

	// Checking for adjacent elements
	// and adding them to array

	// Deviation of row that gets adjusted
	// according to the provided position
	for (int dx = (i > 0 ? -1 : 0); dx <= (i < n ? 1 : 0);
		++dx) {

		// Deviation of the column that
		// gets adjusted according to
		// the provided position
		for (int dy = (j > 0 ? -1 : 0);
			dy <= (j < m ? 1 : 0); ++dy) {
			if (dx != 0 || dy != 0) {
				v.push_back(arr[i + dx][j + dy]);
			}
		}
	}

	// Returning the vector array
	return v;
}

// Driver Code
int main()
{
	// Given vector array
	vector<vector<int> > arr{ { 1, 2, 3 },
							{ 4, 5, 6 },
							{ 7, 8, 9 } };
	int x = 1, y = 1;

	// Function call
	vector<int> ans = getAdjacent(arr, x, y);

	// Print all the adjacent elements
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}
	return 0;
}


