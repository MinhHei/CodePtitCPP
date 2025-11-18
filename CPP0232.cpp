#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        int a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) cin >> a[i][j];
        }
        vector<vector<int>> height(n,vector<int>(m));
        for(int j=0;j<m;j++){
            height[0][j] = a[0][j];
            for(int i=1;i<n;i++){
               if(a[i][j]==1){
                 height[i][j] = height[i-1][j]+1;
               } 
               else height[i][j] = 0;             
            }
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            vector<int> row = height[i];
            sort(row.begin(),row.end(),greater<int>());
            for(int j=0;j<m;j++){
                int area = row[j]*(j+1);
                ans = max(ans,area);
            }
        }
        cout << ans << endl;
    }
}