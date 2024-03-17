#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1; cin >> t;
    while (t--) {
        int nn; cin >> nn;
        vector<vector<int>> a(nn);
        set< int > s;
        for(auto &v: a){
            int n; cin >> n;
            while(n--){
                int i;cin >> i;
                v.push_back(i);
                s.insert(i);
            }
        }
        int ans = 0;
        for(int i = 1; i <= 50; i++){
            if(s.count(i) == 0) continue;
            set< int > st;
            for(auto v: a){
                bool ok = false;
                for(auto x: v){
                    if(x == i){
                        ok = true;
                    }
                }
                if(ok)continue;
                for(auto x: v){
                   st.insert(x);
                }
                //cout << st.size() << ' ';
                ans = max(ans, (int)st.size());
            }cout << '\n';
        }
        cout << ans << '\n';
    }
    return 0;
}
