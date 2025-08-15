#include <iostream>
using namespace std ;

class Node {
    public:
    int data;
    Node* prev;
    Node* next ;

    // constructor 
    Node(int d ){
        this-> data = d;
        this-> prev = NULL;
        this-> next = NULL;

    }

    ~Node(){

        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }

        cout << "Memory free for node with data " << value << endl;

    }
};

void print(Node* head){

    Node* temp = head;
    while(temp != NULL ){
        cout << temp->data << " " ;
        temp = temp->next;

    }
    cout << endl;
}

int getLength(Node* head){
    int len = 0;
     Node* temp = head;
    while(temp != NULL ){
        len++ ;
        temp = temp->next;

    }
    return len;

}

// void InsertAtHead(Node* &head, int d){
//     if(head == NULL){
//         Node* temp = new Node(d);
//         head = temp;
//     }

//     else{
//          Node* temp = new Node(d);
//     temp-> next = head;
//     head->prev = temp;
//     head = temp;
// }

//     }
   

// void InserAtTail(Node* &tail, int d){
//     if(tail == NULL){
//         Node* temp = new Node(d);
//         tail = temp;

//     }

//     else{
//          Node* temp = new Node(d);
//     tail-> next = temp;
//     temp-> prev = tail;
//     tail = temp;

//     }
   
// }


void InsertAtHead(Node* &tail, Node* &head, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }

    else{
         Node* temp = new Node(d);
    temp-> next = head;
    head->prev = temp;
    head = temp;
}

    }
   

void InserAtTail(Node* &tail, Node* &head, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;

    }

    else{
         Node* temp = new Node(d);
    tail-> next = temp;
    temp-> prev = tail;
    tail = temp;

    }
   
}


// void InsertAtPosition(Node* &tail, Node* &head, int position, int d ){
//     // insert at start
//     if(position == 1){
//         InsertAtHead(head, d);
//         return;
//     }

//     Node* temp = head;
//     int cnt = 1;

//     while(cnt < position-1){
//         temp = temp-> next;
//         cnt++;

//     }

//     // inserting at last position
//     if(temp->next == NULL){
//         InserAtTail(tail, d);
//         return;
//     }

//     // creating a node for  d
//     Node* nodeToInsert = new Node(d);

//     nodeToInsert->next = temp->next;
//     temp->next->prev = nodeToInsert;
//     temp->next = nodeToInsert;
//     nodeToInsert->prev = temp;
// }

void InsertAtPosition(Node* &tail, Node* &head, int position, int d ){
    // insert at start
    if(position == 1){
        InsertAtHead(tail, head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp-> next;
        cnt++;

    }

    // inserting at last position
    if(temp->next == NULL){
        InserAtTail(tail, head, d);
        return;
    }

    // creating a node for  d
    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(int position, Node* & head){
    // deleting first node 
    if(position  ==  1){
        Node* temp = head ;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
        


    }

    else{
        // deleting any middle node or last node 
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt ++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;

    }
}


int main() {

    // Node* node1 = new Node(10);
    // Node* head = node1;
    // Node* tail = node1;

    // IF WE SAY THERE IS NO NODE 
    Node* head = NULL;
    Node* tail = NULL;
     


    print(head);

    //cout << getLength(head) << endl;

    InsertAtHead(tail, head, 11);
    print(head);

    // cout << "Head " << head-> data << endl;
    // cout << "Tail " << tail-> data << endl;

    InserAtTail(tail, head, 25);
    print(head);

    // cout << "Head " << head-> data << endl;
    // cout << "Tail " << tail-> data << endl;

    InsertAtPosition(tail, head, 2, 100);
    print(head);

    // cout << "Head " << head-> data << endl;
    // cout << "Tail " << tail-> data << endl;

    InsertAtPosition(tail, head, 4 , 69);
    print(head);

    cout << "Head " << head-> data << endl;
    cout << "Tail " << tail-> data << endl;

    deleteNode(4, head);
    print(head);

    cout << "Head " << head-> data << endl;
    cout << "Tail " << tail-> data << endl;





}