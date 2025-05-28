#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack <string> s;

    s.push("love");
    s.push("rishi");
    s.push("love");

    cout << "Top element " << s.top() << endl;
    s.pop();
    cout << "Top element " << s.top() << endl;

    cout << "Size of stack is " << s.size() << endl;
    cout << "Empty or not " << s.empty() << endl;

}