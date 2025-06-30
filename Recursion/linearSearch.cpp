#include <iostream>
using namespace std;

void print(int arr[], int n){
    cout << "Size of array is " << n << endl;

    for(int i =0; i<n; i++){
        cout << arr[i] << " ";

    }
    cout << endl;
}

bool search(int arr[], int n, int key){
    print(arr, n);
    // base case
    if(n ==0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    else{
        int remaining = search(arr+1, n-1, key);
        return remaining;
    }
}

int main(){

    int n;
    cout << "Enter the size of the array " << endl;
    cin >> n;

    int * arr = new int[n];

    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int key ;
    cout << "Enter the key you want to search " << endl;
    cin >> key;

    bool ans = search(arr, n, key);

    if(ans){
        cout << "Key is present " << endl;

    }
    else{
        cout << "Key is not present " << endl;
    }



}