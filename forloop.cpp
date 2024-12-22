#include <iostream>
using namespace std;
int main(){
    // int n;
    // cout << "Enter the value of n" << endl;
    // cin >> n;

    // cout << "Printing count from 1 to n" << endl;

    // for(int i = 1; i<=n; i++){
    //     cout << i << endl;
    // }

    // for(int a = 0, b = 1; a>=0 && b>=1; a--,b--){
    //     cout << a << " " << b << endl;
    // }



    //SUM OF N NUMBERS
    // int n;
    // cout << "Enter the value of n" << endl;
    // cin >> n;

    // int sum = 0;
    // for(int i = 1; i <=n ; i++){
    //     sum += i;
    // }

    // cout << sum << endl;



    // FIBONACCI SERIES

    // int n = 10;

    // int a = 0;
    // int b = 1;
    // cout << a << " " << b << " "; 

    // for(int i = 1; i<=n; i++){
    //     int next = a+b;
    //     cout << next << " ";

    //     a = b;
    //     b = next;  
    // }


    // PRIME NUMBER

    int n;
    cout << "Enter the value of n" << endl;
    cin >>n;

    bool isPrime = 1;

    for(int i = 2; i<n; i++){
        if(n%i == 0){
           // cout << "Not a prime number " << endl;
            isPrime = 0;
            break;
        }
        
    }

    if(isPrime == 0){
        cout << "Not  a prime number" << endl;
    }
    else{
        cout << "It is a prime number" << endl;
    }

}