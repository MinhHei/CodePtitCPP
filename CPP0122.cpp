#include <iostream>

using namespace std;
using ll = long long;

ll gcd(ll a, ll b){
    if(b==0) 
       return a;
    return gcd(b,a%b);
}

ll lcm(ll a, ll b){
    return a/gcd(a,b)*b;
}

ll bc(int n){
    ll res = 1;
    for(int i=2;i<=n;i++){
        res = lcm(res,i);
    }
    return res;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << bc(n) << endl;
    }
}