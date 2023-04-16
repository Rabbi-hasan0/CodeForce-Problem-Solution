/* header file */
#include<bits/stdc++.h>

/* for faster cin cout */
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
/* sort function */
#define strsort() sort(s.begin(),s.end())
#define arrsort() int n1=sizeof(a)/sizeof(a[0]);sort(a,a+n)
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
#define elif else if
#define ll long long
/*  let's started  */
using namespace std;

void solved()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int a[n];
        int count=0;
        a[0]=0;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            a[i]+=a[i-1];
        }
        ll l,r,k;
        for(int i=0; i<q; i++)
        {
            cin>>l>>r>>k;
            ll sum = a[l - 1] + (a[n] - a[r]);
            sum += (k * (r - l + 1));
            if(sum&1) cout<<yes<<nn;
            else cout<<no<<nn;
        }
    }
}
int main()
{
    fast();
    solved();
    return 0;
}
