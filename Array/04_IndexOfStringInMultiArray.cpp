/*
Input: stringArr[][] = { { “a”, “h”, “b”}, {“c”, “d”, “e”}, {“g”, “t”, “r”} }, keyString = “e”
Output = {1, 2}
Explanation: Following the 0-based indexing the keyString is present at (1, 2) in the multidimensional array.

1ST APPROACH

Firstly, iterate over all the elements in the array as checking each element in first row, then second row and so on. 
Then if the keyString is found in the array, simply return the indexes 
else just return -1 as the indices.

TC - O(N^2) SC- (1)
*/

// 2ND APPROACH Time Complexity: O(rows * cols) Auxiliary Space: O(rows * cols)

#include <bits/stdc++.h>
using namespace std;

pair<int, int> findIndex(const vector<vector<string> >& stringArr, const string& keyString)
{
	vector<string> flattenedArr;
	for (const auto& row : stringArr) {
		flattenedArr.insert(flattenedArr.end(), row.begin(), row.end()); // It flattens the 2D vector into a 1D vector named flattenedArr by concatenating all the rows.
	}

	auto it = find(flattenedArr.begin(), flattenedArr.end(), keyString); //It searches for the keyString within the flattened vector using the std::find function.
	if (it != flattenedArr.end()) {
		int index = distance(flattenedArr.begin(), it); // If the keyString is found, it calculates the index of the string in the flattened vector.
		int rows = stringArr.size(); // It calculates the row and column indices based on the index found in the flattened vector, considering the original dimensions of the 2D vector.
		int cols = stringArr[0].size();
		return { index / cols, index % cols }; // It returns a pair containing the row and column indices. If the key string is not found, it returns {-1, -1}.
	}

	return { -1, -1 };
}

int main()
{
	std::vector<std::vector<std::string> > stringArr{
		{ "a", "h", "b" },
		{ "c", "d", "e" },
		{ "g", "t", "r" }
	};

	string keyString = "e";

	pair<int, int> result = findIndex(stringArr, keyString);

	cout << "The indices are: " << result.first << ", "
		<< result.second << endl;

	return 0;
}
