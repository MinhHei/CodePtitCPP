#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        int ans = 0, cnt=1;
        for(int i=1;i<=n;i++){
            if(i<n&&a[i]==a[i-1]){
                cnt++;
            }
            else{
                if(cnt>1){
                    ans += cnt;
                    cnt = 1;
                }
            }
        }
        cout << ans << endl;
    }
}