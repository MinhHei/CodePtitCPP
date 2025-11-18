#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) cin >> a[i][j];
        }
        vector<int> Rowsum(n,0), Colsum(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                Rowsum[i] += a[i][j];
                Colsum[j] += a[i][j];
            }
        }
        int maxSum = 0;
        for(int i=0;i<n;i++){
            maxSum = max({maxSum, Rowsum[i], Colsum[i]});
        }
        int sum = 0;
        for(int i=0;i<n;i++) sum += Rowsum[i];
        int ans = n*maxSum - sum;
        cout << ans << endl;
    }
}