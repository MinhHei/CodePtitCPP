#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<bool> exist(n + 2, false); // Mảng đánh dấu trạng thái của các số nguyên duong từ 1 đến n+1

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] > 0 && a[i] <= n + 1) {
                exist[a[i]] = true;
            }
        }

        int res = 1;
        while (exist[res]) {
            res++;
        }

        cout << res << endl;
    }

    return 0;
}
