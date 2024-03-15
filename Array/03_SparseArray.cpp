// C++ program for sparse matrix representation.
// Using Link list 
#include<iostream>
using namespace std;

// Node class to represent link list
class Node
{
	public:
	int row;
	int col;
	int data;
	Node *next;
};

// Function to create new node
void create_new_node(Node **p, int row_index,
					int col_index, int x)
{
	Node *temp = *p;
	Node *r;
	
	// If link list is empty then 
	// create first node and assign value.
	if (temp == NULL)
	{
		temp = new Node();
		temp->row = row_index;
		temp->col = col_index;
		temp->data = x;
		temp->next = NULL;
		*p = temp;
	}
	
	// If link list is already created
	// then append newly created node
	else
	{
		while (temp->next != NULL) 
			temp = temp->next;
			
		r = new Node();
		r->row = row_index;
		r->col = col_index;
		r->data = x;
		r->next = NULL;
		temp->next = r;
	}
}

// Function prints contents of linked list
// starting from start
void printList(Node *start)
{
	Node *ptr = start;
	cout << "row_position:";
	while (ptr != NULL)
	{
		cout << ptr->row << " ";
		ptr = ptr->next;
	}
	cout << endl;

	cout << "column_position:";
	ptr = start;
	while (ptr != NULL)
	{
		cout << ptr->col << " ";
		ptr = ptr->next;
	}
	cout << endl;

	cout << "Value:";
	ptr = start;
	
	while (ptr != NULL)
	{
		cout << ptr->data << " ";
		ptr = ptr->next;
	}
}

// Driver Code
int main()
{ 
	
	// 4x5 sparse matrix 
	int sparseMatrix[4][5] = { { 0 , 0 , 3 , 0 , 4 },
							{ 0 , 0 , 5 , 7 , 0 },
							{ 0 , 0 , 0 , 0 , 0 },
							{ 0 , 2 , 6 , 0 , 0 } };
	
	// Creating head/first node of list as NULL
	Node *first = NULL;
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			
			// Pass only those values which 
			// are non - zero
			if (sparseMatrix[i][j] != 0)
				create_new_node(&first, i, j, 
								sparseMatrix[i][j]);
		}
	}
	printList(first);

	return 0;
}


/*

// Implementation of array representation 
// of the sparse array
#include <iostream>
using namespace std;

int main()
{
	int sparse[4][4] = { { 0, 0, 7, 0 },
						{ 1, 0, 0, 0 },
						{ 2, 0, 5, 0 },
						{ 0, 8, 0, 4 } };
	int s = 0;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			if (sparse[i][j] != 0)
				s++;
	int representsparse[3][s];
	int k = 0;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			if (sparse[i][j] != 0) {
				representsparse[0][k] = i; // representsparse[0][k] stores the row index of the non-zero element at index k.
				representsparse[1][k] = j; // representsparse[1][k] stores the column index of the non-zero element at index k.
				representsparse[2][k] = sparse[i][j]; // representsparse[2][k] stores the value of the non-zero element at index k.
				k++;
			}
	cout << "Representation of Sparse array using arrays : "
			"\n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < s; j++)
			cout << " " << representsparse[i][j];
		cout << "\n";
	}
	return 0;
}


*/