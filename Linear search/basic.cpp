#include <iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i = 0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0; 


}




int main(){

    int arr[10] ={5, 7, -1, 3, 6, 8, 5, -1, 6, 9 };
    cout << "Enter the element to search for " << endl;
    int key;
    cin >> key;

   bool found =  search(arr, 10, key);
   if (found) {
    cout << "Key is present" << endl;
   }

   else{
    cout << "Key is absent" << endl;
   }

    

}