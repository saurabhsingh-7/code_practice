#include <iostream>
using namespace std;
int main() {
  // size of the square
  int size = 5;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
        if(i!=4)
        {
        if(i<j || j>0 && j < i )
        {
            cout<<" "  ;
        }
        else if(j==0 || j==i  || i==4)
        {
            cout<<"*" ;
        }

        }
        else
        {
            cout<<"*" ;
        }
    }
    cout << "\n";
  }
  return 0;
}