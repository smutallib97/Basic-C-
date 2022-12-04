#include<iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter a number : ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "Entered number is Even";
    }
    else
    {
        cout << "Entered number is Odd";
    }
    return 0;
}