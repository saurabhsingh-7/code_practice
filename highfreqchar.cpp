#include <iostream>
#include <unordered_map>
using namespace std;
char highfreq(string c)
{
    unordered_map<char, int> ab;
  
    for (char d : c)
    {
        ab[d]++;
    }
    char maxchar ='/0';
    int maxvalue = 0;

    for (auto p : ab)
    {
        if (p.second > maxvalue)
        {
            maxchar = p.first;
            maxvalue = p.second;
            
        }
    }
    return maxchar;
}
int main()
{
    string abc = "caacabcbc";
    cout << highfreq(abc);
}
