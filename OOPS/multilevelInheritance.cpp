#include <iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout << "Speaking " << endl;
    }

};

class Dog: public Animal{


};

class german: public Dog{

};

int main(){

    german g ;
    g.speak();

}