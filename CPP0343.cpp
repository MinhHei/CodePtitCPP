#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s; getline(cin,s);
        stringstream ss(s);
        int x;
        int chan=0, le=0, n=0;
        while(ss>>x){
            n++;
            if(x%2==0) chan++;
            else le++;
        }
        if((n%2==0&&chan>le)||(n%2==1&&chan<le)) cout << "YES\n";
        else cout << "NO\n";
    }
}