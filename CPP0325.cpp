#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int sumOdd = 0, sum = 0;
        for(int i=0;i<(int)s.size();i++){
            int res = s[i]-'0';
            if((i+1)%2==1) sumOdd += res;
            else sum += res;
        }
        int ans = abs(sumOdd-sum);
        if(ans%11==0) cout << "1" << endl;
        else cout << "0" << endl;
    }
}