#include <bits/stdc++.h>

using namespace std;

int n,m,a[101][101];

int dx[8] = {-1,-1,-1,0,1,1,1,0};
int dy[8] = {-1,0,1,1,1,0,-1,-1};

void Try(int i, int j){
    a[i][j] = 0;
    for(int k=0;k<8;k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1>=1 && i1<=n && j1>=1 && j1<=m && a[i1][j1]==1){
            Try(i1,j1);
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++) cin >> a[i][j];
        }
        int cnt = 0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(a[i][j]==1){
                    cnt++;
                    Try(i,j);
                }
            }
        }
        cout << cnt << endl;
    }
}