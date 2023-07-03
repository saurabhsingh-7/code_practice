#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    string a = "i am shruti";
    vector<string> op;
    string substr = "";
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == ' ') {
            if (substr != "") {
                op.push_back(substr);
                substr = "";
            }
        } else {
            substr += a[i];
        }
    }
    if (substr != "") {
        op.push_back(substr);
    }
    string ans="";
    for (int i = op.size() - 1 ; i >= 0; i--) 
    {
        ans= ans+" "+op[i];
     }
    cout << ans << endl;
    return 0;
}

