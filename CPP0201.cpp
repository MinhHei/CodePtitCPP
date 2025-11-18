#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100000 + 5; // kích thước tối đa mảng
long long a[MAXN];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++) cin >> a[i];

        sort(a, a + n);

        long long res = LLONG_MAX;
        for(int i = 0; i < n-1; i++){
            res = min(res, a[i+1] - a[i]);
        }
        cout << res << "\n";
    }
}