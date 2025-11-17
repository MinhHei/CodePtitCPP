#include <iostream>

using namespace std;
using ll = long long;

ll gt(int n){
    ll res = 1;
    for(int i=1;i<=n;i++){
        res *= i;
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    ll s = 0;
    for(int i=1;i<=n;i++){
        s += gt(i);
    }
    cout << s << endl;
}