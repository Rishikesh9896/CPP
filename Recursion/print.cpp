#include <iostream>
using namespace std;

void print(int n){
    // base case
    if(n ==0){
        return;
    }

    cout << n << endl;

    // recursivd relation
    print(n-1);

    // it is a tail recursion .... agar hum cout << n << endl isko print(n-1) kai niche likhe toh yeh head recursion baan jayega
}

int main(){

    int n;
    cin >> n;
    cout << endl;

    print(n);

}
