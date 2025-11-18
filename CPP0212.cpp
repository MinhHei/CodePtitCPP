#include <bits/stdc++.h>

using namespace std;
const int MOD = 1e9+7;

int main(){
    int t; cin >> t;
    while(t--){
        int n,x; cin >> n >> x;
        long long a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        long long res = 0;
        for(int i=0;i<n;i++){
            res = (res*x+a[i])%MOD;
        }
        cout << res << endl;
    }
}