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

    //destructor
    ~Node() {
        int value = this -> data;
        //memory free
        if(this-> next!=NULL){
            delete next;
            this->next = NULL;
        }
        cout << "memroy is free for node with data: "<< value<<endl;
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

void deleteNode(int pos, Node* &head, Node* &tail){

    //delete first node
    if(pos ==1){
        Node* temp = head;
        head = head->next;

        //memory fre start node
        temp->next = NULL;
        delete temp;
    }
    else{
        //delete middle or last node
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
        prev-> next = curr->next;
        curr ->next = NULL;
        delete curr;

    

    }
    
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

    InsertAtPos(head, tail, 3, 13);
    print(head);
    
    cout<< "head "<< head-> data<<endl;
    cout<< "tail "<< tail-> data<<endl;

    deleteNode(4, head, tail);
    print(head);

    cout<< "head "<< head-> data<<endl;
    cout<< "tail "<< tail-> data<<endl;

    return 0;
}