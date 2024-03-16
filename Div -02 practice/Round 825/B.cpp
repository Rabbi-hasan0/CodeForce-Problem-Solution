#include <bits/stdc++.h>
#define int long long
using namespace std;

int gcd(int  a, int  b){
    if (a == 0) return b;
    return gcd(b % a, a);
}
int lcm(int a, int b){
    return (a / gcd(a, b)) * b;
}


int32_t main() {
    int t = 1;cin >> t;
    while (t--) {
        int n;cin >> n;
        vector<int> a(n + 1);
        a[0] = 1;
        map<int, int> mp;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }

        vector<int> gess(n + 5, -1);
        for(int i = 1; i <= n; i++){
            gess[i] = lcm(a[i - 1], a[i]);
        }

        bool ok = true;
        for(int i = 1; i < n; i++){
            if(gcd(gess[i], gess[i + 1]) != a[i]){
                ok = false;
                break;
            }
        }
        
        if(ok)cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
