#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s;
        int k;
        cin >> s >> k;
        vector<int> cnt(26,0);
        for(char c : s){
            if(isalpha(c)){
                c = tolower(c);
                cnt[c -'a'] = 1;
            }
        }
        int ans = accumulate(cnt.begin(),cnt.end(),0);
        int res = 26 - ans;
        if((int)s.size()<26){
            cout << "0" << endl;
            continue;
        }
        if(res<=k) cout << "1" << endl;
        else cout << "0" << endl;
    }
}