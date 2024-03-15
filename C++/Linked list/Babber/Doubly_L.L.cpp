#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int data){
        this -> data =data;
        this -> prev =NULL;
        this-> next = NULL;

    }
    ~Node(){
        int val = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<< "memory free for node with data "<< val<<endl;

    }
};
//traversing 
void print(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout << temp -> data<<" ";
        temp =  temp ->next;
    }
    cout<<endl;
}
//length 0f L.L.
int getlength(Node* &head){
    int len=0;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}
void insertAtHead(Node* &head, Node* &tail, int data){
// if list is empty
    if(head ==NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
    Node* temp = new Node(data);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
    }
}


void insertAtTail(Node* &head, Node* &tail, int data){

    if(head ==NULL){
        Node* temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else{
    Node* temp = new Node(data);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
    }
}

void InsertAtPos(Node* &head, Node* &tail, int pos, int data){
    //new node create

    if(pos ==1){
        insertAtHead(head, tail, data);
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
        insertAtTail(head, tail, data);
        return;
    }

    //creating a node for data
    Node* nodetoInsert = new Node(data);

    nodetoInsert -> next = temp -> next;
    temp -> next->prev  = nodetoInsert;
    temp -> next = nodetoInsert;
    nodetoInsert -> prev = temp;
}

void deleteNode(int pos, Node* &head, Node* &tail){
    // delete at start
    if (pos == 1){
    Node* temp = head;
    temp -> next -> prev =NULL;
    head = temp->next;
    temp -> next = NULL;
    delete temp;
    }
    else{

        //delete at middle or end
        Node* curr = head;
        Node* prev = NULL;

        int count =1;
        while(count<pos){
            prev = curr;
            curr = curr-> next;
            count++;

        }
        
        if(curr->next == NULL){
        tail = prev;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next =NULL;

        delete curr;
    }
}
int main(){
    //if list is empty no node created
    // Node* node1 = new Node(10);
    // Node* head = node1;
    // Node* tail = node1;

    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    cout<< getlength(head)<<endl;

    insertAtHead(head, tail, 11);
    print(head);
    insertAtHead(head, tail, 12);
    print(head);
    insertAtHead(head, tail, 13);
    print(head);
    insertAtHead(head, tail, 14);
    print(head);

    insertAtTail(head, tail, 11);
    print(head);
    insertAtTail(head, tail, 12);
    print(head);
    insertAtTail(head, tail, 13);
    print(head);
    insertAtTail(head, tail, 14);
    print(head);

    InsertAtPos(head, tail, 5, 10);
    print(head);
    InsertAtPos(head, tail, 1, 17);
    print(head);
    InsertAtPos(head, tail, 11, 15);
    print(head);

    deleteNode(11, head, tail);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

// taking input after inserting one element
    // Node* temp = head;
    // int data;
    // int i = 10;
    // while(i--){

    //     cin>>data;
    //     insertAtHead(head, data);
    //     print(head);
    // }

    return 0;
}