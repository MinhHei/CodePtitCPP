#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int check(ll m[],ll n){
    for(int i=0;i<100;i++){
        if(m[i]==n) return 1;
    }
    return 0;
}

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll m[100];
        m[0] = 0;
        m[1] = 1;
        for(int i=2;i<100;i++){
            m[i] = m[i-2] + m[i-1];
        }
        if(check(m,n)) cout << "YES\n";
        else cout << "NO\n";
    }
}