#include <iostream>
#include <string.h>
using namespace std;
bool is_vowel(char ch)
{
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

int main()
{
    string s = "sabebih";
    int n = s.length();
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (is_vowel(s[i]) && is_vowel(s[j]))
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }
        else if ((is_vowel(s[i])) == false)
        {
            i++;
        }
        else if ((is_vowel(s[j])) == false)
        {
            j--;
        }
    }
    cout << s;
}