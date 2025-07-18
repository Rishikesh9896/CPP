#include <iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot = arr[s];

    int cnt =0;
    for(int i =s+1; i<=e; i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    // left and right part vale ko sambhal lete hai
    int i =s, j = e;

    while(i< pivotIndex && j > pivotIndex){
        while(arr[i] < pivot && i < pivotIndex){
            i++;
        }

        while(arr[j] > pivot && j > pivotIndex){
            j--;
        }

        if(i< pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
}

void quickSort(int arr[], int s, int e){
    // base case
    if(s>=e){
        return;
    }

    // partition karenge
    int p = partition(arr, s, e);

    // left part sort karo
    quickSort(arr, s, p-1);

    // right part ko sort karo
    quickSort(arr, p+1,e);
}

int main(){
    int arr[] = {1, 4, 6, 9, 8};
    int n =5;

    quickSort(arr, 0, n-1);

    for(int i =0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}