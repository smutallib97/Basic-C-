
//pass by Value and pass by Reference
#include<iostream>
using namespace std;

void func1(int numVal){

}

void func2(int &numRef){

}

int main(){
    int num = 5;

    //pass by value
    func1(num);
    cout<< "Pass by Value is " <<num<<endl;
    //pass by reference
    func2(num);
    cout<<"Pass by reference is " <<num<<endl;
    return 0;
    
    }