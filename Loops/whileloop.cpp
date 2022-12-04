//Using While Loop

#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    while (num >=0 ) {
        sum += num;

        cout << "Enter a number: ";
        cin >> num;
    }

        cout << "\nThe sum is " << sum << endl;
    
    return 0;
}