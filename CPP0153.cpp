#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long N, K;
        cin >> N >> K;

        if (K == 0) { // tránh chia 0 (theo đề thì K ≥ 0)
            cout << 0 << "\n";
            continue;
        }

        if (N < K) {
            long long S = N * (N + 1) / 2;
            cout << S << "\n";
        } else {
            long long q = N / K;
            long long r = N % K;
            long long S = q * (K * (K - 1) / 2) + r * (r + 1) / 2;
            cout << S << "\n";
        }
    }
    return 0;
}