#include <iostream>
using namespace std;

// it is default int start = 0;
void print(int arr[], int n, int start = 0){
    for( int i =start; i<n; i++){
        cout << arr[i] << endl;
    }
}

int main(){
    int arr[5] = {1, 4, 5, 6, 7};
    int size = 5;

    print(arr, size);

    cout << endl;

    print(arr, size, 2);


}