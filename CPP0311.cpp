#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int n = s.size();
        map<char,int> mp;
        for(char c : s){
            mp[c]++;
        }
        int maxMp = 0;
        for(auto &c : mp){
            if(c.second > maxMp) maxMp = c.second;
        }
        if(maxMp > (n+1)/2) cout << "0" << endl;
        else cout << "1" << endl;
    }
}