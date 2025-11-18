#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    while (T--) {
        int a, m;
        cin >> a >> m;
        int ans = -1;

        for (int x = 0; x < m; x++) {
            if ((1LL * a * x) % m == 1) {
                ans = x;
                break; // tìm x nhỏ nhất
            }
        }

        cout << ans << "\n";
    }
    return 0;
}