#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool fibo(ll n){
    ll f[100];
    f[0]=0; f[1]=1;
    if(n==0 || n==1) return true;
    for(int i=2;i<=92;i++){
        f[i] = f[i-1] + f[i-2];
        if(f[i]==n) return true;
    }
    return false;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        bool ok = true;
        for(auto x : a){
            if(fibo(x)){
                if(!ok) cout << ' ';
                cout << x;
                ok = false;
            }
        }
        cout << endl;
    }
}