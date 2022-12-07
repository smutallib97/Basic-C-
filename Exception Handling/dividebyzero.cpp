#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout<< "Enter Two Numbers" <<endl;
    cin>> a >> b;

    try{
        if(b==0){
            throw b;
        }
        else{
            c= a/b;
            cout<<"Result is: "<< c;
        }
    }
    catch(int x){
        cout<< "Can't devide by zero "<<x;
    }
    
    return 0;
}