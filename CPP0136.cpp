#include <bits/stdc++.h>

using namespace std;

int p[1000001];
void sieve(){
    for(int i=1;i<=1000000;i++) p[i]=1;
    p[0]=p[1]=0;
    for(int i=2;i<=1000;i++){
        if(p[i]){
            for(int j=i*i;j<=1000000;j+=i){
                p[j]=0;
            }
        }
    }
}

int main(){
    sieve();
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        int cnt = 0;
        for(int i=1;i<=sqrt(n);i++){
            if(p[i]) cnt++;
        }
        cout << cnt << endl;
    }
}