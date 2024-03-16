#include <algorithm>
#include <bitset>
#include <array>
#include <tuple>
#include <functional>
#include <iomanip>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <condition_variable>
#include <forward_list>
#include <ratio>
#include <regex>
#include <unordered_map>
#include <unordered_set>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;cin >> t;
    while (t--) {
        int n;cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        vector<int> dp(n + 1, 0);
        for(int i = 0; i < n; i++){
            dp[i + 1] = min(dp[i] + 1, a[i]);
        }
        ll res = 0;
        for(auto x: dp){
            res += x;
        }
        cout << res << '\n';
    }
    return 0;
}
