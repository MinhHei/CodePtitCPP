#include <bits/stdc++.h>

using namespace std;

int firstPos(int a[], int n, int x){
    int res = -1;
    for(int i = 0; i < n; ++i){
        if(a[i] == x){
            res = i;
            break;
        }
    }
    return res == -1 ? -1 : res+1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n,x; cin >> n >> x;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        cout << firstPos(a,n,x) << endl;
    }
}