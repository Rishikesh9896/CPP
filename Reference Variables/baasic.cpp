#include <iostream>
using namespace std;

// bad practice 
// in this wrnign is not cimng but warnig is coming so this is bad practice of using reference variables like this in return vale
// memory aceess na kar pau or maanlo khuch aur padha ho 
int& func(int a){
    int num = a;
    int& ans = num;
    return ans;
}

void update1(int n){
    n++;
}

void update2(int& n){
    n++;
}

int main(){

    // int i =5;

    // // create a reference variable
    // int& k = i;

    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // k++;
    // cout << i << endl;
    // cout << k << endl;

    int n = 5;
    cout << "Before " << n << endl;
    //update1(n);
    update2(n);
    cout << "After " << n << endl;

    func(n);
}