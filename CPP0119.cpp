#include <bits/stdc++.h>

using namespace std;

int solve(int n){
    int cnt = 0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            int j = n/i;
            if(i%2==0) cnt++;
            if(j!=i&&j%2==0) cnt++;
        }
    }
    return cnt;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << solve(n) << endl;
    }
}