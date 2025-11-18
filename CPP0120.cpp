#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll gcd(int a, int b){
   if(b==0) return a;
   return gcd(b,a%b);
}

ll lcm(int a,int b){
    return a/gcd(a,b)*b;
}

int main(){
    int t; cin >> t;
    while(t--){
        int m,n,a,b;
        cin >> m >> n >> a >> b;
        ll l = lcm(a,b);
        ll cntA = n/a-(m-1)/a;
        ll cntB = n/b-(m-1)/b;
        ll cntC = n/l-(m-1)/l;
        cout << cntA+cntB-cntC << endl;
    }
}