#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int dem[256] = {0};
        for(char x : s){
            dem[x]++;
        }
        for(char x : s){
            if(dem[x]==1) cout << x;
        }
        cout << endl;
    }
}