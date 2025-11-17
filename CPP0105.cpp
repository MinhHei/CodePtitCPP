#include <iostream>

using namespace std;

bool lp(int n){
    while(n){
        int r = n%10;
        if(r!=0&&r!=6&&r!=8) return false;
        n /= 10;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(lp(n))
           cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}