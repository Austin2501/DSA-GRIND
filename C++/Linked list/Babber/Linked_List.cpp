// L.L. ==> Linear data structure, made up of collection of nodes.
// node is consist of data and next node address
//Linked list id a dynamic data structure(grow and shrink on runtime)
//no memory wastage
//insertion and deletion is easy(no need of shifting elements like in array)

//INSERT AT BEGINING//

// #include<iostream>
// using namespace std;

// class Node {
//     public:
//     int data;
//     Node* next;

//     //constructor
//     Node(int data){
//         this -> data = data;
//         this -> next = NULL;

//     }
// };

// void InsertAtHead (Node* &head, int data){

//     //new node create
//     Node* temp = new Node(data);
//     temp -> next = head;
//     head = temp;
// }


// void print(Node* &head){

//     Node* temp = head;

//     while(temp!=NULL){
//         cout<< temp -> data << " ";
//         temp = temp -> next;
//         }
//         cout<<endl;
// }

// int main(){
    
//     //created a new node
//     Node* node1 = new Node(10);
//     // cout << node1 -> data <<endl;
//     // cout<< node1 -> next <<endl;

//     //head pointed to node1
//     Node* head = node1;
//     
//     print(head);

//     InsertAtHead(head, 12);
//     print(head);

//     InsertAtHead(head, 15);
//     print(head);

//     return 0;
// }


//INSERT AT END// 

// #include<iostream>
// using namespace std;

// class Node {
//     public:
//     int data;
//     Node* next;

//     //constructor
//     Node(int data){
//         this -> data = data;
//         this -> next = NULL;

//     }
// };

// void InsertAtTail(Node* &tail, int data){
//     //new node create
//     Node* temp = new Node(data);
//     tail -> next = temp;
//     tail = tail -> next;
// }

// void print(Node* &head){

//     Node* temp = head;

//     while(temp!=NULL){
//         cout<< temp -> data << " ";
//         temp = temp -> next;
//         }
//         cout<<endl;
// }

// int main(){
    
//     //created a new node
//     Node* node1 = new Node(10);
//     // cout << node1 -> data <<endl;
//     // cout<< node1 -> next <<endl;

//     //head pointed to node1
//     Node* head = node1;
//     Node* tail = node1;
//     print(head);

//     InsertAtTail(tail, 12);
//     print(head);

//     InsertAtTail(tail, 15);
//     print(head);

//     return 0;
// }

//INSERT AT POSITION//

#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;

    }
};

void InsertAtHead (Node* &head, int data){

    //new node create
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}

void InsertAtTail(Node* &tail, int data){
    //new node create
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = tail -> next;
}


void InsertAtPos(Node* &head, Node* &tail, int pos, int data){
    //new node create

    if(pos ==1){
        InsertAtHead(head, data);
        return;
    }

    Node* temp = head;
    int count =1;

    while(count < pos-1){
        temp = temp -> next;
        count++;
    }

    //inserting at last position
    //updating tail
    if(temp->next == NULL){
        InsertAtTail(tail, data);
        return;
    }

    //creating a node for data
    Node* nodetoInsert = new Node(data);

    nodetoInsert -> next = temp -> next;

    temp -> next = nodetoInsert;
}

void print(Node* &head){

    Node* temp = head;

    while(temp!=NULL){
        cout<< temp -> data << " ";
        temp = temp -> next;
        }
        cout<<endl;
}

int main(){
    
    //created a new node
    Node* node1 = new Node(10);
    // cout << node1 -> data <<endl;
    // cout<< node1 -> next <<endl;

    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);

    InsertAtTail(tail, 12);
    print(head);

    InsertAtTail(tail, 15);
    print(head);

    InsertAtPos(head, tail, 4, 13);
    print(head);
    
    cout<< "head "<< head-> data<<endl;
    cout<< "tail "<< tail-> data<<endl;
    return 0;
}