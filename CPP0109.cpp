#include <iostream>
#include <cmath>

using namespace std;

int cb(int n){
    int c=0, l=0;
    while(n){
        int r = n%10;
        if(r%2==0) c++;
        else l++;
        n /= 10;
    }
    return c==l;
}

int main(){
    int N;
    cin >> N;
    int s = pow(10,N-1);
    int e = pow(10,N)-1;
    int cnt = 0;
    for(int i=s;i<=e;i++){
        if(cb(i)){
            cout << i << " ";
            ++cnt;
            if(cnt%10==0) cout << endl;
        }
    }
}