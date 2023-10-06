#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+7;
int n, a[N];

int cal(int x){
    int l = 1, r = n;
    int ans = 0;
    while(l <= r){
        int mid = (l+r)/2;
        if(a[mid] <= x){
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
 return ans;
}

int32_t main(){
  cin >> n;
  for(int i=1; i<=n; i++){
   cin >> a[i];
  }
  sort(a+1, a+n+1);
  int q;cin >> q;
  while(q--){
    int l, r;
    cin >> l >> r;
    cout << cal(r) - cal(l - 1) << '\n';
  }
return 0;
}