#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        long long a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        vector<long long> res(n,-1); // khoi tao toan -1
        for(int i=0;i<n;i++){
            if(a[i]>=0&&a[i]<n) res[a[i]]=a[i];
        }
        for(int i=0;i<n;i++) cout << res[i] << ' ';
        cout << endl;
    }
}