#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue <string> q;

    q.push("love");
    q.push("rishi");
    q.push("love");

    cout << "Top element " << q.front() << endl;
    q.pop();
    cout << "Top element " << q.front() << endl;

    cout << "Size of stack is " << q.size() << endl;
    cout << "Empty or not " << q.empty() << endl;

}