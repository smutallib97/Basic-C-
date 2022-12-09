/*We can allocate and then deallocate memory dynamically using 
the new and delete operators respectively.*/

#include <iostream>
using namespace std;

int main() {

    int* pointInt;
    float* pointFloat;

    pointInt = new int;
    pointFloat = new float;

    cout<<"Allocating Values to Pointers"<<endl;
    *pointInt = 45;
    *pointFloat = 45.45f;

    cout << *pointInt << endl;
    cout << *pointFloat << endl;

    delete pointInt;
    delete pointFloat;
    cout<<"Deallocated the pointers";
    return 0;
}