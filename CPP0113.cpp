#include <iostream>

using namespace std;

bool check(int n){
    int r = n%10;
    n /= 10;
    while(n>0){
        int t = n % 10;
        if(r==6&&t==8) return true;
        break;
    }
    return false;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(check(n)) cout << "1" << endl;
        else cout << "0" << endl;
    }
}