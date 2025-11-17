#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        size_t pos = s.find("084");
        if (pos != string::npos) {
            s.erase(pos, 3); // xóa 3 ký tự "084"
        }
        cout << s << "\n";
    }
    return 0;
}