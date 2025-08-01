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

void InsertAtPosition(Node* &tail , Node* & head , int position , int d  ){

    if(position == 1){
        InsertAtHead(head, d );
        return;
    }

    Node* temp =  head;
    int cnt = 1;

    while(cnt < position - 1){
        temp = temp-> next;
        cnt++;
    }

    // inserting at last position 
    if(temp-> next == NULL){
        InserAtTail(tail, d);
        return ;
    }

    // creating a new node for d 
    Node* nodeToInsert = new Node(d);
    
    nodeToInsert-> next = temp-> next;
    temp->next = nodeToInsert;


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

    InsertAtPosition(tail, head, 1, 22);
    print(head);



    

}