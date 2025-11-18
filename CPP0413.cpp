#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a.begin(),a.end());
        int l=0, r=n-1;
        vector<int> res;
        while(l<=r){
            if(l!=r){
                res.push_back(a[r--]);
                res.push_back(a[l++]);
            }
            else{
                res.push_back(a[l++]);
            }
        }
        for(int i=0;i<res.size();i++){
            cout << res[i] << ' ';
        }
        cout << endl;
    }
}