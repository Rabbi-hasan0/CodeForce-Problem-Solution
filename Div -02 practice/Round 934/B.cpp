#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;cin >> t;
    while(t--){
        int n, k;cin >> n >> k;
        vector<int> a(n), b(n);
        map<int, int> mp1, mp2; 
        for(auto &i: a){
            cin >> i;
            mp1[i]++;
        }
        for(auto &i: b){
            cin >> i;
            mp2[i]++;
        }
        vector<int> ans1, ans2;
        for(auto [y, x]: mp1){
            if(x > 1){
                ans1.push_back(y);
                ans1.push_back(y);
            }
        }
        for(auto [y, x]: mp2){
            if(x > 1){
                ans2.push_back(y);
                ans2.push_back(y);
            }
        }    
        for(int i = 0; i < n; i++){
            if(mp1[a[i]] == 1 && mp2[a[i]] == 1){
                ans1.push_back(a[i]);
                ans2.push_back(a[i]);
            }
        }
        
        for(int i = 0; i < k * 2; i++){
            cout << ans1[i] << ' ';
        }cout << '\n';
        for(int i = 0; i < k * 2; i++){
            cout << ans2[i] << ' ';
        }cout << '\n';

    }
    return 0;
}
