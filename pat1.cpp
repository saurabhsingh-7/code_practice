#include <iostream>
using namespace std;

int main() {
  // size of the square
  int size = 5;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
        if(i==0 || i==5-1 || j==0 || j==4)
        {
            cout<<"*";
        }
        else
        {
             cout << " ";
        }
    }
    cout << "\n";
  }
  return 0;
}