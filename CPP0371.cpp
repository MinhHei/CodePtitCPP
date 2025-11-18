#include <bits/stdc++.h>

using namespace std;

void vietthuong(string &s){
    for(int i=0;i<s.size();i++) s[i] = tolower(s[i]);
}

int main(){
    string s; cin >> s;
    vietthuong(s);
    string ans = "";
    for(int i=0;i<s.size();i++){
        if(s[i] !='a' && s[i] !='e' && s[i] !='i' && s[i] !='o' && s[i] !='u' && s[i] !='y'){
            ans += ".";
            ans += s[i];
        }
    }
    cout << ans;
}