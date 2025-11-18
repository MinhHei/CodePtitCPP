#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int mod = 0;
        for(char x : s){
            int s = x-'0';
            mod = (mod*2+s) % 5;
        }
        if(mod==0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}