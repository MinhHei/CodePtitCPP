#include <bits/stdc++.h>

using namespace std;

bool sphenic(int n){
    int cnt = 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            int res = 0;
            while(n%i==0){
                n/=i;
                res++;
            }
            if(res > 1) return false;
            cnt++;
        }
    }
    if(n>1) cnt++;
    return cnt==3;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(sphenic(n)) cout << "1" << endl;
        else cout << "0" << endl;
    }
}