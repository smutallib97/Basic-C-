//to display a string entered by user

#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin >> str;
    cout << "Entered string is: " << str << endl;

    cout << "Enter another string: "<<endl;
    cin >> str;
    cout << "Entered string is: "<<str<<endl;

    return 0;
}