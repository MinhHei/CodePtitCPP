#include <iostream>
#include <cmath>

using namespace std;

int prime[10001];
void sieve(){
    for(int i=0;i<=10000;i++) prime[i]=1;
    prime[0] = prime[1] = 0;
    for(int i=2;i<=100;i++){
        if(prime[i]){
            for(int j=i*i;j<=10000;j+=i){
                prime[j]=0;
            }
        }
    }
}

void check(int n){
    sieve();
    for(int i=1;i<=n/2;i++){
        int j=n-i;
        if(prime[i]&&prime[j]){
            cout << i << " " << j;
            break;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        check(n);
        cout << endl;
    }
}