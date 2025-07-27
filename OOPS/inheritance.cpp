#include <iostream>
using namespace std;

class Human {
    public:
    int height;
    int weight; 
    private:
    int age;

    public:
    int getAge(){
        return this->age;

    }

    void setWeight(int w){
        this->weight = w;

    }

};

class Male: private Human{
    public:
    string color;

    void sleep(){
        cout << "Male sleeping " << endl;
    }

    int getheight(){
        return this->height;
    }
};



int main(){

    // Male object1;
    // cout << object1.age << endl;
    // cout << object1.height << endl;
    // cout << object1.weight << endl;

    // object1.setWeight(44);
    // cout << object1.weight << endl;

    // cout << object1.color << endl;
    // object1.sleep();

    // public class and public inherited
    Male m1 ;
    cout << m1.getheight() << endl;  // marked publicly 





    
}