#include <bits/stdc++.h>

using namespace std;
using ll =long long;

ll gcd(ll a, ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main(){
    int t; cin >> t;
    while(t--){
        ll x,y;
        string a;
        cin >> a >> x >> y;
        ll g = gcd(x,y);
        string res = "";
        for(ll i=0; i < g;i++){
            res += a;
        }
        cout << res << endl;
    }
}