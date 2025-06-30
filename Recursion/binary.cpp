#include <iostream>
using namespace std;

void print(int arr[], int s , int e){
    for(int i =s; i<=e; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binaryS(int arr[], int s, int e, int key){

    print(arr, s,e);
    
    if(s>e){
        return false;
    }
    int mid = s + (e-s)/2;
    if(arr[mid] == key){
        return true;
    }
    if(arr[mid] < key){
        return binaryS(arr, mid+1, e, key);
    }
    else{
        return binaryS(arr, s, mid-1, key);
    }
}

int main(){
    int n;
    cout << "Enter the size of the array " << endl;
    cin >> n;

    int * arr = new int[n];

    for(int i =0; i<n; i++){
        cin >> arr[i];
    }
     
    int key;
    cout << "Enter the key " << endl;
    cin >> key;

    int s = 0;
    int e = n-1;

    bool ans = binaryS(arr, s, e, key);

    if(ans){
        cout << "Element is present " << endl;
    }
    else{
        cout << "Element is not present " << endl;
    }


}