//add two numbers by using function

#include<iostream>
using namespace std;

int add(int a, int b){
    return (a + b);
}

int main(){
    int sum;

    sum= add(40, 30);

    cout<<"40 + 30 =" << sum <<endl;
    return 0;
}