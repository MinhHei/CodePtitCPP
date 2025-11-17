#include <iostream>

using namespace std;
using ll = long long;

int tong(int n){
    while(n>=10){
        int sum = 0;
        while(n){
            sum += n%10;
            n /= 10;
        }
        n=sum;
    }
    return n;
}
   
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << tong(n) << endl;
    }
}