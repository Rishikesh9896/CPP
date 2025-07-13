#include <iostream>
using namespace std;

class Hero {
    // prperties
    private:
    // is class kai bahar hum acesss nhi kar sakte isssai so the concept of getters and setters will come into act

    int health;

    public:
    char level;

    Hero(){
        cout << "Constructor called " << endl;
    }

    // parametrized constructor
    Hero(int heath){
        cout << "this-> " << this << endl;
        this->health = health;
    }

    Hero(int health, char level){
        //cout << this << endl;
        this->level = level;
        this->health = health;
    }

    // copy constructor
    Hero(Hero& temp){
        cout << "Copy constructor called " << endl;
        this->health = temp.health;
        this->level = temp.level;

    }

    void print(){
        cout << "Health " << this->health << endl;
        cout << "level" << this->level  << endl;
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

    // // object created sttaically
    // Hero ramesh(10);
    // cout << "Adress of ramesh is " << &ramesh << endl;
    // ramesh.getHealth();
    // ramesh.print();

    // // dynamically
    // Hero *h =  new Hero(11);
    // h->print();

    // Hero temp(22, 'R');
    // temp.print();



    // new concept 
    Hero suresh(70, 'C');
    suresh.print();


// copy constructor
    Hero R(suresh); 
    R.print();

    
   


    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    // // static allocation 
    // Hero a;

    // a.setHealth(80);
    // a.setLevel('B');
    // cout << "Level is " << a.level << endl;
    // cout << "Heath is " << a.getHealth() << endl;

    // // dynamic allocation 
    // Hero *b = new Hero;

    // b->setLevel('S');
    // b->setHealth(90);

    // cout << "Level is " << (*b).level << endl;
    // cout << "Heath is " << (*b).getHealth() << endl;

    // cout << "Level is " << b->level << endl;
    // cout << "Heath is " << b->getHealth() << endl; 


}