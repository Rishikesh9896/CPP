#include <iostream>
using namespace std;
int main(){
   /* int n;
    cin>>n;

    int i = 1;
    while(i<=n){
        cout << i <<" ";
        i = i+1;
    }
    */

   /* int n;
    cin >> n;
    int i = 1;
    int sum = 0;
    while(i<=n){
        sum = sum + i;
        i = i +1;

    }
    cout << "Value of sum is " << sum;

    */

    // HOME WORK
    /* int n;
    cin >> n;
    int i =2;
    int sum = 0;
    while(i <=n){
        sum = sum +i;
        i = i + 2;
    
    }

    cout << "Sum of even numbers is " << sum;


    // HOME WORK 2

    float faherenheit;
    cin >> faherenheit;
    float celsius = (5.0/9) * (faherenheit - 32);
    cout << "Coversion into celsius will be " << celsius;
*/


   // PRIME NUMBER

   int n;
   cin >> n;

   int i = 2;

   while(i<n){
    if(n%i == 0) {
        cout<< "Not Prime for " << i << endl;
    } 
    else{
        cout<< "Prime for " << i << endl;
    }
    i = i +1;
   }





}