#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v;

    // vector <int> a (5,1);
    // where 5 is size and 1 is the element which is being initialized 

    cout << "Capacity" << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity" << v.capacity() << endl;

     v.push_back(2);
    cout << "Capacity" << v.capacity() << endl;

     v.push_back(3);
    cout << "Capacity" << v.capacity() << endl;
    cout << "Size " << v.size() << endl;

    cout << "Element at second index is " << v.at(2) << endl;

    cout << "Front" << v.front() << endl;
    cout << "Last" << v.back() << endl;

    cout << "before pop " << endl;
    for(int i: v){
        cout << i << " ";
    }  
    cout << endl;

    v.pop_back();

    cout << "After pop " << endl;
    for(int i: v){
        cout << i << " ";
    }  

    cout << "Before clear size " << v.size() << endl;
    v.clear();
    cout << "After clear size " << v.size() << endl;    



     






}