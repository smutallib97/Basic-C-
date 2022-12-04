// by using Switch case 
#include <iostream>
using namespace std;

int main() {
    char optr;
    float num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> optr;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    switch (optr) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            cout << "Error! The operator is not correct";
            break;
    }

    return 0;
}