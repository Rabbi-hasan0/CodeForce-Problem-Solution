/**
**     Author: Rabbi Hasan
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/
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
#define pb push_back
/* testcase */
#define test() int t;cin>>t;while(t--)
#define testt() int t;cin>>t;for(int i=1; i<=t; i++)
#define f(i,n) for(lli i = 0; i < n; i++)
using namespace std;
const ll mod = 1e9 + 7;
//const ll N = 2e5 + 10;
/*  let's started  */
void solved()
{
    test()
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        s+='W';
        ll r=0,b=0;
        bool f=true;
        f(i,s.size())
        {
            if(s[i]=='W')
            {
                if(b==0&&r==0 || b>0&&r>0)f=true;
                else
                {
                    f=false;
                    break;
                }
                r=0,b=0;
            }
            if(s[i]=='R') r++;
            if(s[i]=='B') b++;
        }

        if(f || (n==1&&s[0]=='W'))
        cout<<yes<<nn;
        else cout<<no<<nn;
    }
}

int main()
{
    fast();
    solved();
    return 0;
}
