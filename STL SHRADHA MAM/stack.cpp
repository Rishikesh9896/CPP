#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout << "Top element is " << s.top() << endl;
s.pop();
cout << "Top element is " << s.top() << endl;

  while(!s.empty()){
      cout << s.top() << endl;
      s.pop();
  }
}