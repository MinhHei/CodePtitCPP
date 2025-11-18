#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        multiset<int> se;
        for(int i=0;i<n;i++){
            int x; cin >> x;
            se.insert(x);
        } 
        int x = se.count(k);
        if(x==0) cout << -1 << endl;
        else cout << x << endl;
    }
}