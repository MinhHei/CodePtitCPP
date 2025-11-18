#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a.begin(),a.end(),greater<int>());
        for(int i=0;i<n;i++){
            cout << a[i] << ' ';
            --k;
            if(k==0) break;
        } 
        cout << endl;
    }
}
