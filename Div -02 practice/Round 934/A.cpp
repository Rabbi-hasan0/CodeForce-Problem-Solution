#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;cin >> t;
    while(t--){
        int n, k;cin >> n >> k;
        int x = n - k;
        if(x < 2){
            cout << 1 << '\n';
        }else{
            cout << n << '\n';
        }
    }
    return 0;
}
