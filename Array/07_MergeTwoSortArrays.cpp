// Merge two sorted arrays

// 1st approach



// C++ program to merge two sorted arrays/
// #include<bits/stdc++.h>
// using namespace std;

// void mergeArrays(int arr1[], int arr2[], int n1,
// 							int n2, int arr3[])
// {
// 	int i = 0, j = 0, k = 0;
// 	// traverse the arr1 and insert its element in arr3
// 	while(i < n1){
// 	arr3[k++] = arr1[i++];
// 	}
	
// 	// now traverse arr2 and insert in arr3
// 	while(j < n2){
// 	arr3[k++] = arr2[j++];
// 	}
	
// 	// sort the whole array arr3
// 	sort(arr3, arr3+n1+n2);
// }

// // Driver code
// int main()
// {
// 	int arr1[] = {1, 3, 5, 7};
// 	int n1 = sizeof(arr1) / sizeof(arr1[0]);

// 	int arr2[] = {2, 4, 6, 8};
// 	int n2 = sizeof(arr2) / sizeof(arr2[0]);

// 	int arr3[n1+n2];
// 	mergeArrays(arr1, arr2, n1, n2, arr3);

// 	cout << "Array after merging" <<endl;
// 	for (int i=0; i < n1+n2; i++)
// 		cout << arr3[i] << " ";

// 	return 0;
// }

// Time Complexity : O((m+n) log(m+n)) , the whole size of arr3 is m+n
// Auxiliary Space: O(m+n), where m is the size of arr1 and n is the size of arr2

// C++ program to merge two sorted arrays/
#include<iostream>
using namespace std;

// Merge arr1[0..n1-1] and arr2[0..n2-1] into
// arr3[0..n1+n2-1]
void mergeArrays(int arr1[], int arr2[], int n1,
							int n2, int arr3[])
{
	int i = 0, j = 0, k = 0;

	// Traverse both array
	while (i<n1 && j <n2)
	{
		// Check if current element of first
		// array is smaller than current element
		// of second array. If yes, store first
		// array element and increment first array
		// index. Otherwise do same with second array
		if (arr1[i] < arr2[j])
			arr3[k++] = arr1[i++];
		else
			arr3[k++] = arr2[j++];
	}

	// Store remaining elements of first array
	while (i < n1)
		arr3[k++] = arr1[i++];

	// Store remaining elements of second array
	while (j < n2)
		arr3[k++] = arr2[j++];
}

// Driver code
int main()
{
	int arr1[] = {1, 3, 5, 7};
	int n1 = sizeof(arr1) / sizeof(arr1[0]);

	int arr2[] = {2, 4, 6, 8};
	int n2 = sizeof(arr2) / sizeof(arr2[0]);

	int arr3[n1+n2];
	mergeArrays(arr1, arr2, n1, n2, arr3);

	cout << "Array after merging" <<endl;
	for (int i=0; i < n1+n2; i++)
		cout << arr3[i] << " ";

	return 0;
}

// Time Complexity : O(n1 + n2) 
// Auxiliary Space : O(n1 + n2)