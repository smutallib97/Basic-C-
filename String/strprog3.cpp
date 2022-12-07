//string using string data type

#include <iostream>
using namespace std;

int main()
{
    
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Entered line is: " << str << endl;
    return 0;
}