#include <iostream>
#include <cstring>

using namespace std;

class Hero {
    // prperties
    private:
    // is class kai bahar hum acesss nhi kar sakte isssai so the concept of getters and setters will come into act

    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

    Hero(){
        cout << "Constructor called " << endl;
        name = new char[100];
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

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy constructor called " << endl;
        this->health = temp.health;
        this->level = temp.level;

    }

    void print(){
        cout << "Name " << this->name << endl;
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

    void setName(char name[]){
        strcpy(this->name, name);
    }

    static int random(){
        return timeToComplete;
    }

    // Destructor 
    ~Hero(){
        cout << "Desturctor bhai called " << endl;
    }

};

int Hero :: timeToComplete = 5;

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



//     // new concept 
//     Hero suresh(70, 'C');
//     suresh.print();


// // copy constructor
//     Hero R(suresh); 
//     R.print();


// shallow and deep copy concept 

 // Hero hero1;
 // hero1.setHealth(13);
 // hero1.setLevel('D');
 // char name[7] = "Rishi";
// hero1.setName(name);

 // // hero1.print();

 // // use default copy constructor 
 // Hero hero2(hero1);
 // // hero2.print();

  // hero1.name[0] = 'G';
 // hero1.print();

 // hero2.print();

 // hero1 = hero2;

// hero1.print();
// hero2.print();

// DESTURCTOR 
// static
// Hero a;

// // dynamically 
// Hero *b = new Hero();

// //manually destructor call karna padhega 
// delete b;


cout << Hero :: timeToComplete << endl;

cout << Hero :: random() << endl;
// access only static keywords and not others







    
   


    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
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