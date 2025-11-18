#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int k,n; cin >> k >> n;
        vector<int> a;
        for(int i=0;i<k;i++){
            for(int j=0;j<n;j++){
                int x; cin >> x;
                a.push_back(x);
            }
        }
        sort(a.begin(),a.end());
        for(auto x : a) cout << x << ' ';
        cout << endl;
    }
}