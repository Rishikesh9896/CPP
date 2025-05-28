#include <iostream>
#include <set>
using namespace std;

int main(){
    set <int> s;

    s.insert(5);
    s.insert(5);
    s.insert(3);
    s.insert(0);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(1);
    s.insert(1);

    for(auto i : s){
        cout << i << endl;

    }
    cout << endl;

    s.erase(s.begin());

    for(auto i : s){
        cout << i << endl;

    }
    cout << endl;
    cout << "5 is present or not " << s.count(5) << endl;

}