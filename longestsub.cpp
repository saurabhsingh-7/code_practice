#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "abcabcbb";
    int n = s.length();
    unordered_set<char> seen;
    int longest = 0, start = 0, end = 0;
    while (end < n)
    {
        if (seen.find(s[end]) == seen.end())
        {
            seen.insert(s[end]);
            end++;
            longest = max(longest, end - start);
        }
        else
        {
            seen.erase(s[start]);
            start++;
        }
    }
    cout << longest;
}