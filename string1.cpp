#include <iostream>
#include <string>
#include <vector>
using namespace std;

// abc.efg.mo.gr
// cba.gfe.om.gr
int main()
{
    string ab = "abc.efg.mo.gr";
    string input = "";
     string cd = "";

    for (int i = 0; i < ab.length(); i++)
    {
        if (ab[i]== '.')
        {

            for (int j = input.length() - 1; j >= 0; j--)
            {
                cd = cd + input[j];
            }
            cd = cd + ".";
            input = "";
        }
        else
        {
            input = input + ab[i];
        }
    }
    for (int j = input.length() - 1; j >= 0; j--)
    {
        cd = cd + input[j];
    }
    cout << cd;
    return 0;
}