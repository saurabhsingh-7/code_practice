#include <iostream>
using namespace std;

int main() {
  // size of the square
  int size = 5;
  int p = 9;
  int k=0;
  int alpha =65;
  for (int i = 1; i <= p; i++) {
    i<=5?k++:k--;
    for (int j = 1; j <= p; j++) {
        if(j==5-k+1 || j==5+k-1)
        {
            if(j<=5)
            cout<<char(alpha);
            else
            cout<<char(alpha+1);
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