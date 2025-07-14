#include <iostream>
// #include "Hero.cpp"
using namespace std;

class Hero {
    // prperties
    private:
    // is class kai bahar hum acesss nhi kar sakte isssai so the concept of getters and setters will come into act

    int health;

    public:
    char level;

    void print(){
        cout << level << endl;
    }

    int getHealth(){
        return health;

    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch ){
        level = ch;
    }

};

int main(){
    // creation of object
    Hero ramesh ;

    // in this size concept of padding and greedy alignmemnt is being used so give with it 

    cout << "Size of ramesh is " << sizeof(ramesh) << endl;
     

    cout << "Ramesh health is " << ramesh.getHealth() << endl;

    ramesh.setHealth(70);

  
    ramesh.level = 'A';

    // acess properties using ". " operator

    cout << "Heatlh is " << ramesh.getHealth() << endl;
    cout << "Level is " << ramesh.level << endl;
    //cout << "Size " << sizeof(h1) << endl;

    



}