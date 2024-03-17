#include<bits/stdc++.h>
using namespace std;
const int N=105;
int b[N];

int main()
{
    int test = 1;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        int a[n + 1];
        for(int i=1; i<=n; i++){
            cin >> a[i];
        }
        vector < int > v;
        int j=1;
        for(int i=1; i<=n; i++){
            for( ; ; j++){
                if(j != a[i]){
                    v.push_back(j);
                    //cout << j << ' ';
                    j++;
                    break;
                }

            }
        }
        cout << v[v.size()-1] << '\n';
    }
    return 0;
}

