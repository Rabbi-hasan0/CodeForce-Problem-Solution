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
        ll a[n+1],sum=0;
        vector<ll>v;
        f(i,n)
        {
            cin>>a[i];
            if(a[i]!=0)
            v.push_back(a[i]);
            sum+=abs(a[i]);
        }
       cout<<sum<<' ';
        ll neg=0,pos=0,Neg=0,Pos=0,c=0;
        f(i,v.size())
        {
          //cout<<v[i]<<' ';
          if(v[i]<0)
            neg++;
          if(v[i]>0)
            pos++;


         if(v[i]<0)
         {
           c=1;
         }
         if(v[i]>0)
         {
           Neg+=c;
           c=0;
         }
        }
        cout<<Neg+c<<nn;
    }
}

int main()
{
    fast();
    solved();
    return 0;
}
