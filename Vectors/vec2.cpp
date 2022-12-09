/*
The vector class provides various methods to perform different operations on vectors.
Basic Operations are :
1) Add Elements 
2) Access Elements
3) Change Elements
4) Remove Elements
*/
//1) Add Elements

#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> num {1, 2, 3, 4, 5};

  cout << "Initial Vector: ";

  for (const int& i : num) {
    cout << i << "  ";
  }
  
  // add the integers 6 and 7 to the vector
  num.push_back(6);
  num.push_back(7);

  cout << "\nUpdated Vector: ";

  for (const int& i : num) {
    cout << i << "  ";
  }

  return 0;
}