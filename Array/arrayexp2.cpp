#include<iostream>
using namespace std;

int main(){
    int num[4];

    cout << "Enter numbers in array:"<<endl;

    for(int i=0; i<4; i++){
        cin >> num[i];
    }

    cout << "The Entered array numbers are: " <<endl;

    for(int j=0; j<4; j++){
        cout <<num[j] << " ";
    }
    return 0;
}