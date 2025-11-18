#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        int min = a[0];
        int max = -1;
        for(int i=1;i<n;i++){
            if(a[i]-min>max){
                max = a[i] - min;
            }
            if(a[i]<min) min = a[i];
        }
        cout << max  << endl;
    }
}