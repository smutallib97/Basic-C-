/*
2) Multilevel Inheritance
-> not only you can derive a class from the base class 
   but you can also derive a class from the derived class. 
   This form of inheritance is known as multilevel inheritance..
*/
#include <iostream>
using namespace std;
class Vehicle{
   public:
      void vehicle(){
         cout<<"I am a vehicle"<<endl;
      }
};

class FourWheeler : public Vehicle{
   public:
      void fourWheeler(){
         cout<<"I have four wheels"<<endl;
      }
};

class Car : public FourWheeler{
   public:
      void car(){
         cout<<"I am a car"<<endl;
      }
};
int main(){
   Car obj;
   obj.car();
   obj.fourWheeler();
   obj.vehicle();
   return 0;
}