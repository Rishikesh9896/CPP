#include <iostream>
using namespace std;

void update(int **p){
   // p = p+1;
    // ->  no change in this 

   // *p = *p + 1;
    // yes change hoga -> p mai 

    **p = **p + 1;
}

int main(){
    int i = 5;
    int *p = &i;

    int **p2 = &p;

    // cout << "Printing p " << p << endl;
    // cout << "Address of p " << &p << endl;

    // // exact same as of printing p 
    // cout << *p2 << endl;

    // cout << i << endl;
    // cout << *p << endl;
    // cout << **p2 << endl;

    // cout << &i << endl;
    // cout << p << endl;
    // cout << *p2 << endl;

    // cout << &p << endl;
    // cout << p2 << endl;

    cout << endl << endl;

    cout << "before " << i << endl;
    cout << "before " << p << endl;
    cout << "before " << p2 << endl;

    update(p2);

    cout << "after " << i << endl;
    cout << "after " << p << endl;
    cout << "after " << p2 << endl;

    cout << endl << endl;
}