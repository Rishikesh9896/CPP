#include <iostream>
using namespace std;

int getSum(int arr[], int n){
    // base case
    if(n == 0){
        return 0;
    }
    if(n ==1){
        return arr[0];
    }
    else{
        int remaining = getSum(arr+1, n-1);
        int sum = arr[0] + remaining;

        return sum;
    }
}

int main(){
    // int arr[5] = {1, 2, 3, 4, 5};
    // int size = 5;

    int n;
    cout << "Enter the size " << endl;
    cin >> n;

    int * arr = new int[n];
    
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }
    


    int sum = getSum(arr, n);

    cout << "Sum is " << sum << endl;
}