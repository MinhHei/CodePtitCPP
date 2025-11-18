#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s1,s2;
        getline(cin,s1); getline(cin,s2);
        vector<string> v1;
        vector<string> v2;
        stringstream ss1(s1); stringstream ss2(s2);
        string w1,w2;
        while(ss1>>w1){
            v1.push_back(w1);
        }
        while(ss2>>w2){
            v2.push_back(w2);
        }
        set<string> se(v2.begin(),v2.end());
        set<string> res;
        vector<string> diff;
        for(auto x : v1){
            if(se.count(x)==0&&res.count(x)==0){
                diff.push_back(x);
                res.insert(x);
            }
        }
        sort(diff.begin(),diff.end());
        for(auto x : diff) cout << x << ' ';
        cout << endl;
    }
}