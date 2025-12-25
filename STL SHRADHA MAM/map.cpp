#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    map <string , int> m;

    m["apple"] = 100;
    m["banana"] = 200;
    m["guava"] = 300;
    m["orange"] = 400;

    m.insert({"kiwi" , 500});

    m.erase("banana");

    for(auto i : m){
        cout << i.first << " " << i.second << endl;
    }

    cout << "Value at key guava is " << m.count("guava") << endl;

    if(m.find("apple") != m.end()){
        cout << "Key is present" << endl;
    } else {
        cout << "Key is not present" << endl;
    }



}