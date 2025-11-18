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
        int l = *min_element(a,a+n);
        int r = *max_element(a,a+n);
        set<int> s(a,a+n); // loai phan tu trung nhau
        int cnt = (r-l+1) - s.size();
        cout << cnt << endl;
    }
}