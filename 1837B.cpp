#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=0,c1=0,c2=0,c3=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='<')
            {
                c++;
            }
            else c=0;
            if(c>c2)
                c2=c;
            if(s[i]=='>')
            {
                c1++;
            }
            else c1=0;
            if(c1>c3)
                c3=c1;
        }
        cout<<max(c2,c3)+1<<endl;
    }

return 0;
}
