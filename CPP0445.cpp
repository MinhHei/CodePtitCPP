#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        int min1 = a[0];
        int min2 = -1;
        for(int i=1;i<n;i++){
            if(a[i]!=min1){
                min2 = a[i];
                break;
            }
        }
        if(min2==-1) cout << -1 << endl;
        else cout << min1 << ' ' << min2 << endl;
    }
}