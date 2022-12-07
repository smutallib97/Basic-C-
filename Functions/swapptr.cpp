//pass by reference by using pointers

#include <iostream>
using namespace std;

void swap(int* num1, int* num2) {
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    int a = 1, b = 2;

    cout << "Before swapping a and b values are :" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap(&a, &b);

    cout << "After swapping a and b values are" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}