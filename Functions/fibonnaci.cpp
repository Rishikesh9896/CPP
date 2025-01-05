#include <iostream>
using namespace std;

int fibbo (int x){
    int a = 0, b = 1;
    cout << a << " " << b;
    int sum;
    for(int i = 2; i<x; i++){
        sum = a+b;
        cout << " " << sum ;
        a = b;
        b = sum;

    }
    // return sum;
    
    // cout << "Series is" << sum << endl; 
    
}

int main(){
    int n;
    cin >>n;
    fibbo(n);
    

}