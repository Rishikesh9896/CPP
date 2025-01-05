#include <iostream>
using namespace std;

void printArray(int arr[], int size){

    cout << "Printing the array " << endl;
      for(int i = 0; i<size; i++){
        cout << arr[i] << " ";

    }
    cout << "Printing done" << endl;

}



int main(){

    // declaration
    int number[15];

    // Accessing an array
    cout << "Value at 1 index " << number[1] << endl;

    // cout << "Value at 20 index " << number[20] << endl;

    // initialize an array
    int second[3] = {5, 7, 11};

    // accessing an array
    cout << "Value at second index " << second[2] << endl;

    int third[15] = {2, 7};

    int n = 15;
    printArray(third, 15);
    // cout << "Printing the array" << endl;
    // // print the array
    // for(int i = 0; i<n; i++){
    //     cout << third[i] << " ";

    // }

    // Initialising all locations with zero

    int fourth[10] = {0};
    n = 10;

     printArray(fourth, 10);
    
    
    // // print the array
    // for(int i = 0; i<n; i++){
    //     cout << fourth[i] << " ";

    // }



    // Initialising all locations with one not possible with below line

    int fifth[10] = {1};
    n = 10;
     printArray(fifth, 10);

    
    // // print the array
    // for(int i = 0; i<n; i++){
    //     cout << fifth[i] << " ";

    // }

    int fifthSize = sizeof(fifth)/sizeof(int);
    cout << fifthSize << endl;

    char ch[5] = {'a', 'b', 'c', 'r', 'l'};
    cout << ch[3] << endl;

    cout << "Printing the array " << endl;
    // printing the array
    for(int i = 0; i<5; i++){
        cout << ch[i] << " ";
    }
    cout << "Printing done" << endl;

    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[9];








    cout << "Everything is fine" << endl;
    return 0;  

}