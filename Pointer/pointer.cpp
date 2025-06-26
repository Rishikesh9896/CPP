#include <iostream>
using namespace std;

int main(){

   //  int arr[10] = {2, 5, 7};
    // cout << "Address of memory block is " << arr << endl;
    // cout << "Address of memory block is " << &arr[0] << endl;

    // cout << "4th " << *arr << endl;
    // cout << "5th " << *arr + 1 << endl;
    // cout << "6th " << *(arr + 1) << endl;
    // cout << "7th " << arr[2] << endl;
    // cout << "8th " << *(arr+2) << endl;

    // int i = 2;
    // cout << i[arr] << endl;

    int temp[10] = {1, 2};
    cout << sizeof(temp) << endl;

    cout << "4th " << sizeof(*temp) << endl;
    cout << "5th " << sizeof(&temp) << endl;



    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl; 
    cout << sizeof(*ptr) << endl; 
    cout << sizeof(&ptr) << endl; 

    int a[20] = {1, 2, 3, 5};
    cout << &a[0] << endl;

    int *p = &a[0];
    cout << &p << endl;



}