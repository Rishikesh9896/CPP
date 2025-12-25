#include <iostream>
using namespace std;

int main(){
    int a , b;
    cin >> a >> b;
    cout << "Before Swapping " << a << " " << b << endl;
    // Swapping

    // int temp = a;
    // a = b;
    // b = temp;

    // cout << "After swapping " << a << " " <<  b << endl;

    // swapping without using third variable 
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping without third variable " << a << " " << b << endl;
}