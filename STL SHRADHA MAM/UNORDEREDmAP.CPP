#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map <string , int> m;

    m["laptop"] = 100;
    m["desktop"] = 200;
    m["phone"] = 300;
    m["tablet"] = 400;

    for(auto i : m){
        cout << i.first << " " << i.second << endl;
    }


}