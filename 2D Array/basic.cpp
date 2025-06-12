#include <iostream>
#include <limits.h>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int column){

     for(int row = 0 ; row<3; row ++){
        for(int column = 0; column<4; column++){
            if(arr[row ][column] == target){
                return 1;
            }
        }
    }
    return 0;
  
}

void rowSum(int arr[][4], int row, int column){
    for(int row = 0; row < 3; row++){
        int sum = 0;
        for(int column = 0; column < 4; column++){
            sum += arr[row][column];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int largetRow(int arr[][4], int row, int column){
    int maxi = INT_MIN;
    int rowIndex = -1;


    for(int row = 0; row < 3; row++){
        int sum = 0;
        for(int column = 0; column < 4; column++){
            sum += arr[row][column];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << endl;

    cout << "The maximum sum is " << maxi << endl;
    return rowIndex;

}



int main(){
    int arr[3][4];

   // int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};
    
   // taking input row wise
   cout << "Enter the elements " << endl;
    for(int i = 0 ; i<3; i++){
        for(int j = 0; j<4; j++){
            cin >> arr[i][j];
        }
    }

    // taking input column wise
    // for(int i = 0 ; i<4; i++){
    //     for(int j = 0; j<3; j++){
    //         cin >> arr[j][i];
    //     }
    // }

     cout << "Printing the array " << endl;
     for(int i = 0 ; i<3; i++){
        for(int j = 0; j<4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter the element to search" << endl;
    int target;
    cin >> target;

    if (isPresent(arr, target, 3, 4)){
        cout << "Element found " << endl;
    }

    else {
        cout << "Not found " << endl;
    }

    rowSum(arr, 3, 4);

    int n = largetRow(arr, 3, 4);
    cout << "Max row is at index" << n << endl;
}