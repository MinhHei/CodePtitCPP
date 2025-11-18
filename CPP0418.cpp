#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        int a[n],b[m];
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<m;i++) cin >> b[i];
        set<int> hop;
        for(auto x : a) hop.insert(x);
        for(auto x : b) hop.insert(x);
        set<int> giao;
        for(auto x : a){
            if(binary_search(b,b+m,x))
                giao.insert(x);
        }
        for(auto x : hop) cout << x << ' ';
        cout << endl;
        for(auto x : giao) cout << x << ' ';
        cout << endl;    
    }
}