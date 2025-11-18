#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int n = s.size();
        bool ok = true;
        for(int i=0;i<n;i++){
            if((s[i]-'0')%2!=0){
                ok = false;
                break;
            }
        }
        bool ko = true;
        for(int i=0;i<n/2;i++){
            if(s[i] != s[n-i-1]){
                ko = false;
                break;
            }
        }
        if(ok&&ko) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}