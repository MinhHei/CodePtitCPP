#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
       int n; cin >> n;
       map<int, int > me;
       int res = -1, stop=0;
       for(int i=0;i<n;i++){
         int x; cin >> x;
         me[x]++;
         if(me[x]==2&&!stop){
            res = x;
            stop = 1;
          }
        }
    cout << res << endl;
    }
}