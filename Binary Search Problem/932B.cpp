#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+9;
int l, r, k, a[N];
vector<int>v[10];

int f(int x){
   int product = 1;
    while(x){
        int digit = x % 10;
        if(digit != 0)
            product *= digit;
        x /= 10;
    }
 return product;
}

int G(int x){
    if(x < 10){
        return x;
    }
 return G(f(x));
}

int lb(vector<int> &d, int x){
    int l = 0;
    int r = d.size();
    int ans = 0;
    while(l <= r){
        int mid = (l+r)/2;
        if(d[mid] >= x){
            ans = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    //cout <<"LOWER BOUND " << ans << '\n';
    return ans;
}

int ub(vector<int> &d, int x){
    int l = 0;
    int r = d.size();
    int ans = 0;
    while(l <= r){
        int mid = (l+r)/2;
        if(d[mid] <= x){
            l = mid + 1;
        }
        else{
            ans = mid;
            r = mid - 1;
        }
    }
    //cout <<"UPPER BOUND " << ans << '\n';
    return ans;
}

int32_t main(){

    for(int i = 1; i <= N; i++){
        a[i] = G(i);
        v[a[i]].push_back(i);
    }

    int t;cin >> t;
    while(t--){

        cin >> l >> r >> k;
        auto x = lb(v[k], l);
        auto y = ub(v[k], r);
       //auto x = lower_bound(v[k].begin(), v[k].end(), l);
       //auto y = upper_bound(v[k].begin(), v[k].end(), r);
        cout << y - x << '\n';
    }
  return 0;
}
