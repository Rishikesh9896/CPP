#include <iostream>
using namespace std;

int factorial(int n){
    // base conddition
    if(n == 0){
        return 1;
    }
   // return n*factorial(n-1);
   // or

   int smaller = factorial(n-1);
   int bigger = n*smaller;

   return bigger;

}

int main(){
    int n;
    cin >> n;

    int ans = factorial(n);
    cout << ans << endl;

}