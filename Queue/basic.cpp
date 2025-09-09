#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q;

    q.push(11);
    cout << "Fromt of the q is " << q.front() << endl;

     q.push(15);
    cout << "Fromt of the q is " << q.front() << endl;


     q.push(13);
    cout << "Fromt of the q is " << q.front() << endl;

    cout << "Size of queue is " << q.size() << endl;

    q.pop();

    cout << "Size of queue is " << q.size() << endl;

    if(q.empty()){
        cout << "Queue is empty " << endl;
    }

    else{
        cout << "Queue is not empty " << endl;
    }



}