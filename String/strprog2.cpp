//to read and display an entire line entered by user

#include <iostream>
using namespace std;

int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin.get(str, 100);

    cout << "Entered string is: " << str << endl;
    return 0;
}