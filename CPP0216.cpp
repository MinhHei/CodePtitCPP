#include <bits/stdc++.h>

using namespace std;

string check(vector<int>m, int l, int r){
    int a = 0;
    int x = 0;
    for(int i=l;i<r;i++){
        if(m[i+1] >= m[i] && i) a++;
        if(m[i] > m[x]) x = i;
    }
    if(m[x] < m[r]) x = r;
    if(a == r-l) return "Yes\n";
    int b = 0, c = 0;
    for(int i=l;i<x;i++){
        if(m[i+1] >= m[i]) b++;
    }
    for(int i=x;i<r;i++){
        if(m[i+1] <= m[i]) c++;
    }
    if(b==x-l && c == r-x) return "Yes\n";
    return "No\n";
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        int l,r; cin >> l >> r;
        cout << check(a,l,r);
    }
}