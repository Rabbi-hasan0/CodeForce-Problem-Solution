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
#define f(i, n) for(int i = 0; i < n; i++)
using namespace std;
const long long MOD = 1e9 + 7;
/* GCD Finding Algo */
int gcd(int a, int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
/*  let's started  */
void solved()
{
    test()
    {
        int n;
        cin>>n;
        int a[n];
        set<int>s;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            s.insert(a[i]);
        }
        int sum=n-s.size();
        if(sum%2==0) cout<<s.size()<<nn;
        else cout<<s.size()-1<<nn;
    }
}
int main()
{
    fast();
    solved();
    return 0;
}
