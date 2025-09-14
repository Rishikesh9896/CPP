#include <iostream>
using namespace std;

class Stack {
    // properties 
    public:
    int * arr;
    int top;
    int size ;

    // beahviour 
    Stack(int size){
        this -> size = size ;
        arr = new int [size];
        top = -1;

    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "STACK OVERFLOW " << endl;
        }

    } Temperate numbers of poder banana temperate number as they will while banana if you use one now

    void pop(){

        if(top >=0 ){
            top --;
        }

        else{
            cout << "STACK UNDERFLOW " <<   endl;
        }

    }

    int peek(){

        if(top >=0 ){
            return arr[top];
        }

        else{
            cout << "stack is empty " << endl;
            return -1;
        }

 


    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }

        else{
            return false;
        }

    }

};

int main(){

    Stack st(5);
    st.push(22);
    st.push(33);
    st.push(56);
    st.push(79);

    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;

    if(st.isEmpty()){
        cout << "Stack is empty " << endl;
    }
    else{
        cout << "Stack is not empty " << endl;
    }

}