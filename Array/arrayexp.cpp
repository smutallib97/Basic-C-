#include<iostream>
using namespace std;

int main(){
    int arr[5] = {15, 4, 47, 16, 35};

    cout<< "The given array is:" <<endl;

    for(int i=0; i<5; i++) {
        cout<<"The value of array index "<<i<< " is " <<arr[i]<<endl;

    }

    return 0;
}