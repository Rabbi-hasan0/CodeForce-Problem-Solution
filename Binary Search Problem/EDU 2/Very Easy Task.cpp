#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int y, x, n;

bool check(int mid){
 if(x > y) swap(x, y);
 long long cnt = 0;
 if(x <= mid){
   cnt ++;
   mid -= x;
   cnt += mid/x;
   cnt += mid/y;
 }
 return cnt >= n;
}

int32_t main(){

   cin >> n >> x >> y;
   int l = 1, r = 2e9, ans = 0;
   while(l <= r){
        int mid = (1LL*l+r)/2;
        if(check(mid)){
            ans = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
   }

   cout << ans << '\n';

  return 0;
}