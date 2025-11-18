#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

int fibo(ll n){
    if(n==1&&n==2) return 1;
    ll fn2=1, fn1=1, fn;
    for(int i=3;i<=n;i++){
        fn = fn1 + fn2;
        fn2 = fn1;
        fn1 = fn;
    }
    return fn1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << fibo(n);
        cout << endl;
    }
}