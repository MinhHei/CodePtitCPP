#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (!(cin >> T)) return 0;

    // Đáp án chuẩn cho 2 mã đề
    vector<string> key101 = {"A","B","B","A","D","C","C","A","B","D","C","C","A","B","D"};
    vector<string> key102 = {"A","C","C","A","B","C","D","D","B","B","C","D","D","B","B"};

    for (int tc = 0; tc < T; ++tc) {
        string code;
        cin >> code;

        int correct = 0;
        for (int i = 0; i < 15; ++i) {
            string ans;
            cin >> ans;
            // chuẩn hóa chữ in thường/hoa nếu cần
            for (auto &ch : ans) ch = toupper(ch);

            if (code == "101") {
                if (ans == key101[i]) ++correct;
            } else if (code == "102") {
                if (ans == key102[i]) ++correct;
            } else {
                // nếu có mã đề khác, xem như sai (hoặc có thể xử lý khác)
            }
        }

        double score = (double)correct * 10.0 / 15.0;
        cout.setf(ios::fixed); 
        cout << setprecision(2) << score << "\n";
    }

    return 0;
}