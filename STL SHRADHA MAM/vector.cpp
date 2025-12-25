#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    vec.emplace_back(60);

  //  vec.pop_back();

  vec.erase(vec.begin());

  vec.insert(vec.begin()+2, 100);

    for(int value : vec){
        cout << value << " ";
    }

    cout << endl;

    cout << "value at index 2 is " << vec[2] ;

    cout << "Vector at front " << vec.front() << endl;
    cout << "Vector at back " << vec.back() << endl;

}