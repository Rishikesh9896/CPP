#include <iostream>
using namespace std;

// global variable
int score = 15;

void a (int& i){
    cout << score << "in a " << endl;

    char ch = 'a';
    cout << i << endl;
}

void b(int& i){
    cout << score << "in b " << endl;
    cout << i << endl;
}

int main(){

    cout << score << "in main " << endl;
    int i =5;
    a(i);
    b(i);

}