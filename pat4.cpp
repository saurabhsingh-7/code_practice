#include <iostream>
using namespace std;

int main() {
  // size of the square
  int size = 5;
  int p = (2*size)-1;
  for (int i = 1; i <= size; i++) {
    for (int j = 1; j <= p; j++) {

        if(j==5-i+1 || j== 5+i-1 || i==5)
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