#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0 ; i<n ; i++) cin >> a[i];
        sort(a.begin(), a.end()); // sap xep mang tang dan
        int min = INT_MAX;
        for(int i=1;i<n;i++){
            int hieu = a[i]-a[i-1]; // hieu giua 2 phan tu lien tiep khi soft
            if(hieu<min){
                min = hieu;
            }
        }
        cout << min << endl;
    }
}
