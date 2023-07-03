#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<string> strs ={"flower","flow","flight"};
  sort(strs.begin(),strs.end());
  int k =strs.size();
  string m = strs[k-1];
  string n= strs[0];
  string abc="";
  for(int i=0; i< m.length(); i++)
  {
     if(n[i]==m[i])
     {
       abc=abc+ n[i];
     }
     else
     break;
  }
   cout << abc;
}