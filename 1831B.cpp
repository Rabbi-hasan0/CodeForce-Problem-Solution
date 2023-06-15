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
const ll MOD = 1e9 + 7;
const ll N = 2e5 + 10;
//const int MOD = 1e9 + 7;
/*  let's started  */
int a[N],b[N];
void solved()
{
    test()
    {
        int n;
    cin >> n;
    vector<int> c1(n * 2 + 1), c2(n * 2 + 1);
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++i)
    {
        cin >> b[i];
    }
    int cnt1 = 0, cnt2 = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (a[i] != a[i - 1])
        {
            c1[a[i - 1]] = max(c1[a[i - 1]], cnt1);
            cnt1 = 1;
        }
        else
        {
            cnt1++;
        }
        if (b[i] != b[i - 1])
        {
            c2[b[i - 1]] = max(c2[b[i - 1]], cnt2);
            cnt2 = 1;
        }
        else
        {
            cnt2++;
        }
    }
    c1[a[n]] = max(c1[a[n]], cnt1);
    c2[b[n]] = max(c2[b[n]], cnt2);
    ll res = 0;
    for (int i = 1; i <= (n << 1); ++i)
    {
        res = max(res, (ll)c1[i] + c2[i]);
    }
    cout << res << endl;
    }
}
int main()
{
    fast();
    solved();
    return 0;
}
