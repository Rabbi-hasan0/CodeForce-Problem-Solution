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
        string s,ss;
        cin>>s>>ss;
        while(s.size()<ss.size())
            s='0'+s;
        while(ss.size()<s.size())
            ss='0'+ss;

        string s1,s2;
        int c=0,sum=0;
        for(int i=0; i<s.size(); i++)
        {
            if(c==1)
            {
                sum+=9;
            }
            if(s[i]==ss[i]&&c==0)
            {
                s1+=s[i];
                s2+=ss[i];
            }
            if(s[i]!=ss[i]&&c==0)
            {
                s1+=s[i];
                s2+=ss[i];
                sum+=abs(s1[i]-ss[i]);
                c=1;
            }
        }

        cout<<sum<<nn;

    }
}
int main()
{
    fast();
    solved();
    return 0;
}
