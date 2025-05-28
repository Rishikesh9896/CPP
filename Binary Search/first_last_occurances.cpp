#include <iostream>
using namespace std;

// YOU CAN ALSO FIND THE TOTAL NUMBER OF OCCURANCES BY USING THE CONCEPT THAT FIRST TAKE OUT THE FIRST AND LAST OCCURANCES 
//AND THEN LAST - FIRST + 1 = TOTAL NUMBER OF OCCURANCES

int firstOcc(int arr[], int n, int key){
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s <=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]){
            s = mid+1;
        }
        else if(key < arr[mid]){
            e = mid -1;
        }

        mid = s+ (e-s)/2;
    }
    return ans;

}

int lastOcc(int arr[], int n, int key){
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s <=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]){
            s = mid+1;
        }
        else if(key < arr[mid]){
            e = mid -1;
        }

        mid = s+ (e-s)/2;
    }
    return ans;

}




int main(){

    int even[5] = {1, 2, 3, 3, 5};
    int first = firstOcc(even, 5, 3);
    int last = lastOcc(even, 5, 3);
    cout << "First occurance of 3 is at index " << first << endl;
    cout << "Last occurance of 3 is at index " << last << endl;

    int total = (last - first) + 1;

    cout << total;

    


}