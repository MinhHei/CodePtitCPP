#include <bits/stdc++.h>
using namespace std;

// hàm tính gcd
long long gcd(long long a, long long b) {
    while (b) {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}

// hàm tính lcm
long long lcm(long long a, long long b) {
    return a / gcd(a,b) * b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long X, Y, Z;
        int N;
        cin >> X >> Y >> Z >> N;

        long long L = lcm(lcm(X,Y), Z);

        // tính số nguyên dương nhỏ nhất có N chữ số
        long long A = 1;
        for (int i = 1; i < N; i++) A *= 10;
        long long B = A * 10 - 1;

        // tính k = ceil(A / L)
        long long k = (A + L - 1) / L; // công thức ceil(A/L)
        long long ans = k * L;

        if (ans <= B) cout << ans << "\n";
        else cout << -1 << "\n";
    }
}