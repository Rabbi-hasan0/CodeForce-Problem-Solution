#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int a[N];
int n, k;

bool BinarySearch(int l, int r, int k){
    while(l <= r){
        int mid = (l+r)/2;
        if(a[mid] == k){
            return true;
        }
        else if(a[mid] > k){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return false;
}

int main(){
    int q;
    cin >> n >> q;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    while(q--){
        int x;
        cin >> x;
        (BinarySearch(0, n-1, x))? cout << "YES\n" : cout << "NO\n";
    }

return 0;
}
