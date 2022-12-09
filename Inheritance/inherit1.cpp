/*
->Inheritance allows us to create a new class (derived class) from 
  an existing class (base class).
->Inheritance is an is-a relationship. We use inheritance only if 
  an is-a relationship is present between the two classes.
*/

#include <iostream>
using namespace std;

// base class
class Bike {

   public:
    void speed() {
        cout << "Bike have good speed" << endl;
    }

    void mileage() {
        cout << "Bike have good mileage" << endl;
    }
};

// derived class
class Honda : public Bike {
 
   public:
    void color() {
        cout <<"Honda Bike Color is black & silver" << endl;
    }
};

int main() {
    
    Honda hn;

    hn.color();
    hn.speed();
    hn.mileage();

    return 0;
}