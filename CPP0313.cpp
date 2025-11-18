#include <bits/stdc++.h>

using namespace std;

int main(){
    string s,word;
    getline(cin,s);
    getline(cin,word);
    stringstream ss(s);
    string tmp;
    vector<string> v;
    while(ss>>tmp){
        if(tmp != word) v.push_back(tmp);
    }
    for(auto x : v) cout << x << ' ';
}