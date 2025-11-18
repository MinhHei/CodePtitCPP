#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        set<char> se;
        for(int i=0;i<n;i++){
            string s; cin >> s;
            for(char c : s) se.insert(c);
        }
        for(char c : se) cout << c << ' ';
        cout << endl;
    }
}