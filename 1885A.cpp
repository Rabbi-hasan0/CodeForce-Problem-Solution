/**
**     Author: Rabbi Hasan
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
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
using namespace std;
void solved()
{
    int n,k,x;
    cin>>n>>k>>x;
    if(x!=1&&k>=1)
    {
        cout<<yes<<nn<<n<<nn;
        while(n--)cout<<1<<' ';cout<<nn;
    }
    elif(n%2==0&&x==1&&k>1)
    {
        n/=2;cout<<yes<<nn<<n<<nn;
        while(n--)cout<<2<<' ';cout<<nn;
    }
    elif(n&1 &&x==1&&k>=3)
    {
        n-=3; n/=2;
        cout<<yes<<nn<<n+1<<nn<<3<<' ';
        while(n--)cout<<2<<' ';cout<<nn;
    }
    else
        cout<<no<<nn;
}
int main()
{
    fast();
    test()
    solved();
    return 0;
}
