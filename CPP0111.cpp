#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

bool lk(ll n){
    int r = n%10;
    n /= 10;
    while(n>0){
        int t = n%10;
        if(abs(t-r)!=1) return false;
        r=t;
        n /= 10;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
       ll n;
       cin >> n;
       if(lk(n)) cout << "YES" << endl;
       else cout << "NO" << endl;
    }
}

