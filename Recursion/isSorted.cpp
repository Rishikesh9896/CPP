#include <iostream>
using namespace std;

bool isSorted(int arr[], int size){
    // base case
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool remaining = isSorted(arr +1, size-1);
        return remaining;
    }
}


int main(){
    int arr[5] = {2, 4, 9, 9, 9};
    int size = 5;

    bool ans = isSorted(arr, size);

    if(ans){
        cout << "Array is sorted";
    }
    else{
        cout << "Array is not sorted ";
    }

}