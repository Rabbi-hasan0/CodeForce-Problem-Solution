#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;cin >> t;
    while(t--){
    int n;cin >> n;
    vector<int>a(n);
    map<int, int> mp;
    for(auto &i: a) {
        cin >> i;
        mp[i]++;
    }
    sort(a.begin(), a.end());
 
    vector<pair<int, int>> vp;
    for(auto [x, y]: mp){
        vp.push_back({x, y});
    }
    sort(vp.begin(), vp.end());
 
    int first_pos = mp.size();
    for(int i = 0 ; i < mp.size(); i++){
        auto[x, y] = vp[i];
        if(x == i && y > 1)continue;
        if(x == i){
            first_pos = i + 1;
        }
        else {
            first_pos = i;
        }
        break;
    }
 
    int ans = mp.size();
    for(int i = first_pos; i < mp.size(); i++){
        auto[x, y] = vp[i];
        if(x == i && y > 1)continue;
        ans = i;
        break;
    }
 
    cout << ans << '\n';
    }
    return 0;
}
