#include <iostream>
#include <unordered_set>
using namespace std;
string removeDuplicate(string s)
{
  unordered_set<char> uniqueChars;
  string result ;
  for(char c:s)
  {
    if(uniqueChars.find(c)==uniqueChars.end())
    {
    uniqueChars.insert(c);
    result.push_back(c);
    }
  }
  return result;
}
int main()
{
    string a ="hello, world";
    cout<<removeDuplicate(a);
}
