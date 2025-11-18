#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        int min = INT_MAX;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int x = a[i] + a[j];
                if(abs(x)<abs(min)) min = x;
            }
        }
        cout << min << endl;
    }
}