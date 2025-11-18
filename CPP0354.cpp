#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        string tmp = "";
        int cnt = 1;
        for(int i=1;i<=s.size();i++){
            if(i<s.size()&&s[i]==s[i-1]){
                cnt++;
            }
            else{
                tmp += s[i-1];
                tmp += to_string(cnt);
                cnt = 1;
            }
        }
        cout << tmp << endl;
    }
}