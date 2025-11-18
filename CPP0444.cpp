#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n,x; cin >> n >> x;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        int pos = -1;
        for(int i=0;i<n;i++){
            if(a[i]==x){
                pos = i+1;
                break;
            }
        }
        cout << pos << endl;
    }
}