/* header file */
#include<bits/stdc++.h>
#include<stack>
#include <queue>
#include <algorithm>
#include<iostream>
#include<string>
/* for faster cin cout */
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
/* sort function */
#define strsort() sort(s.begin(),s.end())
#define arrsort() int n1=sizeof(a)/sizeof(a[0]);sort(a,a+n1)
/* legth function */
#define strlen s.size()
#define arrlen int n1=sizeof(a)/sizeof(a[0])
#define intlen int n2=trunc(log10(n))+1
/* Conver function */
#define csti int csti=stoi(s)
/* Others Sortcut */
#define PI 3.1415926535897932384626433832795
#define nn "\n"
#define yes "YES"
#define no "NO"
#define case "Case "
#define elif else if
#define ll long long
#define lli long long int
/* testcase */
#define test() int t;cin>>t;while(t--)
#define testt() int t;cin>>t;for(int i=1; i<=t; i++)
#define f(i,n) for(int i = 0; i < n; i++)
using namespace std;
const long long MOD = 1e9 + 7;
/*  let's started  */
void solved()
{
    test()
    {
        string s;
        cin>>s;
        int flag=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[0]!=s[i])
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
        {
            string a,b,c;
            for(int i=0; i<s.size()-1; i++)
            {
                if(i<1)
                    a+=s[i];
                if(i<s.size()-2)
                {
                    b+=s[i];
                }
                else
                {
                    c+=s[i];
                }
            }
            cout<<a<<' '<<b<<' '<<c<<nn;
        }
        else
        {
            if(s[0]=='b')
            {
                string a,b,c;
                int d=s.size();
                a+=s[0];
                b+=s[1];
                for(int i=2; i<s.size(); i++)
                    c+=s[i];
                cout<<a<<' '<<b<<' '<<c<<nn;
            }
            else
            {
                string a,b,c;
                int d=s.size();
                a+=s[0];
                if(s[1]=='a')
                {
                    b+=s[1];
                    for(int i=2; i<s.size(); i++)
                        c+=s[i];
                }
                else
                {
                    for(int i=1; i<s.size(); i++)
                    {
                        if(s[i]=='b'&&i<d && i<s.size()-1)
                        {
                            b+=s[i];
                        }
                        else
                        {
                            d=i;
                            c+=s[i];
                        }
                    }
                }
                cout<<a<<' '<<b<<' '<<c<<nn;
            }
        }
    }
}
int main()
{
    fast();
    solved();
    return 0;
}
