#include <iostream>
using namespace std;

class A {
    public:
    void sayHello(){
        cout << "Hello Rishi " << endl;
    }

    // same return type hai toh uske andar paramter add karo 
    void sayHello(string name ) {
        cout << "Hello " << name << endl;
    }

    // diffrent return type hai tab bhi uske andar parametere add karo uske bina nhi chalega same functions 

    int sayHello(string name , int n ){
        cout << "Hiii " << name << endl;
        return n;
    }

};

class B {

    public:
    int a ;
    int b ;

    public:
    int add () {
        return a + b;
    }

    void operator+ (B &obj){
        int value1 = this -> a;
        int value2 = obj.a;
        cout << "Output " << value2 -  value1 << endl; 

    }

    void operator() (){
        cout << "Mai bracket hu " << this->a << endl;
    }

};

class Animal {
    public:
    void speak(){
        cout << "Speaking " << endl;
    }
};

class dog: public Animal{

    public:
    void speak(){
        cout << "Barking " << endl;
    }

};

int main(){

    // A obj;
    // obj.sayHello();

    B obj1 , obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;
    obj2();

    dog obj11;
    obj11.speak();

}