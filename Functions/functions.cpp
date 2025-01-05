#include <iostream>
using namespace std;

int power(int a , int b){
    int ans = 1;
    for(int i = 1; i<=b; i++){
        ans = ans *a;
    }
    return ans;
}

// int power(){
//     int a, b;
//     cin >> a >> b;
//     int ans = 1;
//     for(int i = 1; i<=b; i++){
//         ans = ans * a;
//     }
//     return ans;
// }


int main(){

//    int a, b;
//    cin >> a >> b;
//    int ans = 1;

//    for(int i = 1; i<=b; i++){
//     ans = ans *a;
//    } 
//    cout << "Answer is " << ans << endl;

    // USING FUNCTIONS

    int a,b;
    cin >> a >>b;
   int answer = power(a,b);
   cout << "Answer is " << answer << endl;
}