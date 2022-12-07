//two dimentional array

#include <iostream>
using namespace std;

int main() {
    int test[2][2] = {{2, -5},
                      {9, 1}};
        //array row
    for (int i = 0; i < 2; ++i) {
        //array column
        for (int j = 0; j < 2; ++j) {
            cout << "test[" << i << "][" << j << "] = " << test[i][j] << endl;
        }
    }

    return 0;
}