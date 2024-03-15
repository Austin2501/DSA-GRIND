// L.L. ==> Linear data structure, made up of collection of nodes.
// node is consist of data and next node address
// Linked list id a dynamic data structure(grow and shrink on runtime)
// no memory wastage
// insertion and deletion is easy(no need of shifting elements like in array)

// INSERT AT BEGINING//

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtHead(Node *&head, int data)
{

    // new node create
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

bool search(Node *head, int x)
{
    // recursive approach
    if (head == NULL)
    {
        return false;
    }
    if (head->data == x)
    {
        return true;
    }
    else
    {
        return search(head->next, x);
    }

    // iterative approach
    //  Node* current = head; // Initialize current
    //  while (current != NULL) {
    //      if (current-> data == x)
    //          return true;
    //      current = current->next;
    //  }
    //  return false;
}

void print(Node *&head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    int x = 12;
    // created a new node
    Node *node1 = new Node(10);
    // cout << node1 -> data <<endl;
    // cout<< node1 -> next <<endl;

    // head pointed to node1
    Node *head = node1;

    print(head);

    InsertAtHead(head, 12);
    print(head);

    InsertAtHead(head, 15);
    print(head);

    search(head, x) ? cout << "Yes" : cout << "No";
    return 0;

    return 0;
}
