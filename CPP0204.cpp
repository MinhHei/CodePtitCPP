#include <bits/stdc++.h>

using namespace std;

int nt(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return n>1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int L,R; cin >> L >> R;
        int cnt = 0;
        for(int i=L;i<=R;i++){
            if(nt(i)) cnt++;
        }
        cout << cnt << endl;
    }
}