#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int freq[26] = {0};
        for(char c : s) freq[c-'a']++;
        long long res = 0;
        for(int i=0;i<26;i++){
            long long f = freq[i];
            res += f*(f+1)/2;
        }
        cout << res << endl;
    }
}