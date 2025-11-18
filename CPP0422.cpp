#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<long long> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        vector<long long> v;
        for(auto x : a){
            if(x!=0) v.push_back(x);
        }
        while((int)v.size()<n) v.push_back(0);
        for(auto x : v) cout << x << ' ';
        cout << endl;
    }
}