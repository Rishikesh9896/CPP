#include <iostream>
#include <map>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }


    // destructor 
    ~Node(){
        int value = this-> data;
        if(this-> next != NULL){
            //delete next;
            this-> next = NULL;
        }
        cout << "Memory is free from node with data " << value << endl;
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

void deleteNode(int position, Node* & head){
    // deleting first node 
    if(position  ==  1){
        Node* temp = head ;
        head = head->next ;
        // memory free karwao 
        temp-> next = NULL;
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

        prev-> next = curr-> next;
        curr -> next = NULL;
        delete curr;

    }
}

bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }
    
map<Node*, bool> visited;

Node* temp = head;
while(temp != NULL){
    // cycle is present 
    if(visited[temp] == true){
        cout << "Present on element " << temp -> data << endl;
        return true;
    }
    visited[temp] = true;
    temp = temp -> next;
}

return false;

}

Node* floydDetection(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }

        slow = slow -> next;

         if(slow == fast){
            cout << "Present at " << slow -> data << endl;
        return slow;
    }
    }

    return NULL;

   
}

Node* getStartingNode(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* intersection = floydDetection(head);
    Node* slow = head;

    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }

    return slow;
}

void removeLoop(Node* head){
    if(head == NULL){
        return ;
    }

    Node* startofLoop = getStartingNode(head);
     if(startofLoop == NULL) return;
    Node* temp = startofLoop;

    while(temp -> next != startofLoop){
        temp = temp -> next;
    }

    temp -> next = NULL;


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

    //print(head);

    //InsertAtHead(head, 12);

    InserAtTail(tail, 12);

    //print(head);

    InsertAtPosition(tail, head, 1, 22);

    InsertAtPosition(tail, head, 2, 33);
    InsertAtPosition(tail, head, 1, 3);
    //print(head);

    
    // cout << "Head " << head-> data << endl;
    // cout << "Tail " << tail-> data << endl;

    // // deleteNode(1, head);
    // // print(head);

    

    tail -> next = head -> next ;

    cout << "Head " << head-> data << endl;
    cout << "Tail " << tail-> data << endl;

    // if(detectLoop(head)){
    //     cout << "Cycle is present " << endl;
    // }

    // else{
    //     cout << "No cycle is present " << endl;
    // }

     if(floydDetection(head) != NULL){
        cout << "Cycle is present " << endl;
    }

    else{
        cout << "No cycle is present " << endl;
    }

    Node* loop =  getStartingNode(head);
    cout << "Loop starts at " << loop -> data << endl;

    removeLoop(head);
    print(head);







    



    

}