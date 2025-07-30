#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

};

void InsertAtHead(Node* &head , int d){

    // new node creation 
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void InserAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail-> next = temp;
    tail = temp; 

}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp-> next;
    }

    cout << endl;
}

int main(){

     // dyanmaic allocation 
     // created a new node 
     Node* node1 = new Node(10);

     // static allocation
   // Node node1(5);

    // cout << node1.data << endl;
    // cout << node1.next << endl;

    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    // head pointed to new node 
    Node* head = node1;
    Node* tail = node1;

    print(head);

    //InsertAtHead(head, 12);

    InserAtTail(tail, 12);

    print(head);

    

}