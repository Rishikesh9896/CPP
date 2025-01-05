#include <iostream>
using namespace std;
int main(){
    int amount;
    cout << "Enter the number " << endl;
    cin >>amount;
    int Hundred, Fifty, Twenty, Ten, One;
    

    switch(1){
        case 1: Hundred = amount / 100;
        amount = amount %100;
        cout << "The 100 notes are " << Hundred << endl;

        case 2: Fifty = amount/50;
        amount = amount%50;
        cout << "The 50 notes are " << Fifty << endl;

        case 3: Twenty = amount/20;
        amount = amount%20;
        cout << "The 20 notes are " << Twenty << endl;

        case 4: Ten = amount/10;
        amount = amount%10;
        cout << "The 10 notes are " << Ten << endl;

        case 5: One = amount/1;
        amount = amount%1;
        cout << "The 1 notes are " << One << endl;
    }
    return 0;
}