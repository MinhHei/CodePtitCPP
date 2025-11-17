#include <iostream>

using namespace std;
using ll = long long;

ll tn(ll n){
    ll rev=0,tmp=n;
    while(n){
        rev = rev*10+n%10;
        n/=10;
    }
    return rev==tmp;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(tn(n))
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}