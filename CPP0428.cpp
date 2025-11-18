#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        long long a[n],b[m];
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<m;i++) cin >> b[i];
        multiset<long long> se;
        for(auto x : a) se.insert(x);
        for(auto x : b) se.insert(x);
        for(auto x : se) cout << x << ' ';
        cout << endl;
    }
}