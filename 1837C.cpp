#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        string x="0";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!='?')
            {
                x=s[i];
               cout<<s[i];
            }
            if(s[i]=='?')
            cout<<x;
        }
        cout<<endl;
    }

return 0;
}
