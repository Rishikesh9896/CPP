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

int main(){

     // dyanmaic allocation 
     Node* node1 = new Node(5);

     // static allocation
   // Node node1(5);

    // cout << node1.data << endl;
    // cout << node1.next << endl;

    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

}