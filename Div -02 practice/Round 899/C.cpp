#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(auto &i: a)cin >> i;

        long long sum = 0;
        for(int i = 2; i < n; i++) {
            sum += max(0, a[i]);
        }
        if(n == 1) {
            cout << max(0, a[0]) << '\n';
            continue;
        }
        a[1] = max(0, a[1]);
        sum += max(0, a[0] + a[1]);
        cout << sum << '\n';

    }
    return 0;
}
