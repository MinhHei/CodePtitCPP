#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        set<int> a;
        for(int i=1;i<=n-1;i++){
            int x; cin >> x;
            a.insert(x);
        }
        for(int i=1;i<n;i++){
            if(a.find(i)==a.end()){
                cout << i << endl;
                break;
            }
        }
    }
}