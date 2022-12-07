#include <iostream>
using namespace std;
int main() {
    int var = 5;

  
    int* pointVar;
    pointVar = &var;

    cout << "var = " << var << endl;

    // print address of var
    cout << "Address of var (&var) = " << &var << endl
         << endl;

    // print pointer pointVar
    cout << "pointVar = " << pointVar << endl;

    // print the address pointVar points to
    cout << "the address pointed to by pointVar (*pointVar) = " << *pointVar << endl;
    
    return 0;
}