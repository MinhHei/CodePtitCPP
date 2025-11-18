#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        long long N, K;
        cin >> N >> K;

        if (K == 0) { // modulo 0 không xác định -> theo đề ta in 0
            cout << 0 << '\n';
            continue;
        }

        long long S = 0;
        if (N < K) {
            S = N * (N + 1) / 2;
        } else {
            long long q = N / K;
            long long r = N % K;
            S = q * (K * (K - 1) / 2) + (r * (r + 1) / 2);
        }

        cout << (S == K ? 1 : 0) << '\n';
    }
    return 0;
}