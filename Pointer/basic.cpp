#include <iostream>
using namespace std;

int main(){
   int num = 5;

    cout << num << endl;
    cout << "Address of num is " << &num << endl;

    int *ptr = &num;

    cout << "Address is " << ptr << endl;
    cout << "Value is " << *ptr << endl;

    cout << "Size of integer is " << sizeof(num) << endl;
    cout << "Size of pointer is " << sizeof(ptr) << endl;

    // int num = 5;
    // int a = num;
    // a++;

    // cout << num << endl;

    // int *p = &num;
    // cout << num << endl;
    // (*p)++;
    // cout << num << endl;

    // // copying a pointer
    // int *q = p;
    // cout << p << " " << q << " " << endl;

    // cout << *p << " " << *q << " " << endl;

    // int i =3;
    // int *t = &i;
    // (*t)++;

    // cout << *t << endl;



}