#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector <int> vec = { 30 , 20 , 80 , 40 , 50};

    sort(vec.begin() , vec.end());

    for(auto i : vec){
        cout << i << " ";
    }




}