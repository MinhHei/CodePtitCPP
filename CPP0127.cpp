#include <iostream>
#include <cmath>

using namespace std;

int prime[1000001];
void sieve(){
    for(int i=0;i<=1000000;i++) prime[i]=1;
    prime[0]=prime[1]=0;
    for(int i=2;i<=sqrt(1000000);i++){
        if(prime[i]){
            for(int j=i*i;j<=1000000;j+=i){
                prime[j]=0;
            }
        }
    }
}

void check(int n){
    sieve();
    bool ok = false;
    for(int i=1;i<=n/2;i++){
        int j=n-i;
        if(prime[i]&&prime[j]){
            cout << i << " " << j;
            cout << endl;
            ok = true;
        }
    }
    if(!ok) cout << "-1" << endl;
}

int main(){
     int t;
     cin >> t;
     while(t--){
        int n;
        cin >> n;
        check(n);
     }
}