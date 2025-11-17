#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

void nt(ll n){
    ll max = -1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            max = i;
            while(n%i==0){
                n /= i;
            }
        }
    }
    if(n!=1) max = n;
    cout << max;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        nt(n);
        cout << endl;
    }
}
