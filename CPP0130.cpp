#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

void nt(ll n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            while(n%i==0){
                cout << i << " ";
                n /= i;
            }
        }
    }
    if(n!=1) cout << n;
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

