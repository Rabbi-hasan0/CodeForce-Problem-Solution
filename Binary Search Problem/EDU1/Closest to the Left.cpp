#include<bits/stdc++.h>
using namespace std;

signed main(){
  int n, k;
  cin >> n >> k;
  int a[n+1];
  for(int i=1; i<=n; i++){
   cin >> a[i];
  }
  sort(a+1, a+n+1);
  while(k--){
  int x;
  cin >> x;
  int l = 1;
  int r = n;
  int ans = 0;
  while(l<=r){
  int mid = (l+r)/2;
  if(a[mid] <= x){
    ans = mid;
    l = mid + 1;
  }else{
    r = mid - 1;
  }
  }
  cout << ans << '\n';
  }
return 0;
}