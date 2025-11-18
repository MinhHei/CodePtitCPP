#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,q; cin >> n >> q;
        int a[n];
        int dp[n];
        for(int i=0;i<n;i++){
           cin >> a[i];
           if(i==0) dp[i]=a[i];
           else dp[i] = dp[i-1]+a[i];
        }
        while(q--){
           int l,r; cin >> l >> r;
           --l;--r;
           if(l==0) cout << dp[r] << endl;
           else cout << dp[r]-dp[l-1] << endl;
        }
    }
}