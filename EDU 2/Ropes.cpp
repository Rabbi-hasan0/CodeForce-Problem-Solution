#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int a[N], k ,n;

bool check(double x){
 double cnt = 0.0;
 for(int i = 0; i < n; i++){
  cnt += floor(a[i]/x);
 }
 return cnt >= k;
}

int32_t main(){

   cin >> n >> k;
   for(int i = 0; i < n; i++){
     cin >> a[i];
   }
   double l = 0, r = 1e8, ans = 0;
   while(r - l >= 1e-6){
        double mid = (l+r)/2;
        if(check(mid)){
            ans = mid;
            l = mid;
        }
        else{
            r = mid;
        }
   }

   cout << fixed << setprecision(6) << ans << '\n';

  return 0;
}