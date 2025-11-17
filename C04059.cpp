#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll fibo[93];

void check(){
    fibo[1] = 1;
    fibo[2] = 1;
    for(int i=3;i<=92;i++){
        fibo[i] = fibo[i-1] + fibo[i-2];    
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    check();
    while(t--){
        int a,b; cin >> a >> b;
        for(int i=a;i<=b;i++){
            cout << fibo[i] << ' ';
        }
        cout << endl;
    }
}