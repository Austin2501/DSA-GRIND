/*
C++ Program to Remove All Occurrences of an Element in an Array

1st approach
create another array and copy all elements except the target element.
Time Complexity: O(n)

Space Complexity: O(n)

*/

// 2nd Optimized Approach (In-place Shifting) Time Complexity: O(n) Space Complexity: O(1)

// Check whether the current element is the target element or not.
// If it is the target element increase the cnt variable.
// After this element, all the non-target elements will shift left with the gap of (n-cnt).


#include <iostream>
using namespace std;

void remove_all_occurrence(int arr[], int target, int n)
{
int cnt = 0;

// Shifting non target elements 
// to the left side
for(int i = 0; i < n; i++)
{
	if(arr[i] != target)
	{
	    arr[i - cnt] = arr[i]; 
	}
	else
	{
	    cnt++;
	}
}

// Printing the array
for(int i = 0; i < (n - cnt); i++)
{
	cout << arr[i] << " ";
}
return; 
}

// Driver code
int main() 
{
int arr[] = {1, 4, 3, 6, 8, 3, 9, 10, 3, 3, 7};
int target = 3;
int n = (sizeof(arr) / sizeof(arr[0]));

remove_all_occurrence(arr, target, n);
return 0;
}
