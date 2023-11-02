#include<bits/stdc++.h>
#define Start_Coding() ios_base::sync_with_stdio(false);cin.tie(nullptr)
#define all(v) v.begin(),v.end()
#define arrlen int n1 = sizeof(a)/sizeof(a[0])
#define intlen int n2 = trunc(log10(n))+1
#define yes "YES"
#define no "NO"
#define pb push_back
#define f(x, y) for(int i = x; i < y; i++)
#define to_decimal() binary.to_ulong()
#define get_msb(x) __lg(x);
#define elif else if
using namespace std;
typedef long long int ll;
const int N = 1e6, mod = 1e9 + 7;
//int prefix_xor[N], a[N];

int maxpow(int x){
  int cnt = 0;
  while(x % 2 == 0){
     x /= 2;
     cnt ++;
  }
  return cnt;
}

void solved(){

    int n;cin >> n;
    int total_pw_of_two = 0;
    vector<int> indpw;
    for(int i = 1; i <= n; i++){
       int x;cin >> x;
       total_pw_of_two += maxpow(x);
       indpw.pb(maxpow(i));
    }
    if(total_pw_of_two >= n){
       cout << 0 << '\n';
       return;
    }

    sort(indpw.rbegin(), indpw.rend());
    int ans = 0;
    for(auto pw: indpw){
        total_pw_of_two += pw, ++ans;
        if(total_pw_of_two >= n){
          cout << ans << '\n';
          return;
        }
    }
    cout << -1 << '\n';
}

int main(){
    Start_Coding();
    int T = 1;
    cin >> T;
    while(T--){
        solved();
    }
    return 0;
}