/*
Friend Funtion: 
->Data hiding is a fundamental concept of object-oriented programming.
  It restricts the access of private members from outside of the class.
->Similarly, protected members can only be accessed by derived classes
  and are inaccessible from outside.
->The friend function in C++ is defined outside the scope of the class.
  It has the authority to access all protected members and private members of the class.
*/


#include <iostream>
using namespace std;

class Box {
  private:
    int length;

  public:
    Box() : length(0) {}

    friend int printLength(Box); // friend function
};

int printLength (Box b) {
    
    b.length += 10;
    
    return b.length;

}

int main(){
  Box b;
  cout<<"Length of box: "<<printLength(b)<<endl;
  
  return 0 ;

}