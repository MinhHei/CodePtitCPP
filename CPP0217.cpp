#include <bits/stdc++.h>
using namespace std;

int check(vector<vector<int>> &a, int mid) {
    int n = a.size();
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int j = n - 1;
        while (j >= 0 && a[i][j] > mid) j--;
        cnt += (j + 1);
    }
    return cnt;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<vector<int>> a(n, vector<int>(n));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];

        int l = a[0][0], h = a[n - 1][n - 1];
        while (l < h) {
            int mid = (l + h) / 2;
            if (check(a, mid) < k) l = mid + 1;
            else h = mid;
        }
        cout << l << endl;
    }
    return 0;
}