#include <bits/stdc++.h>

using namespace std;

int main() {
	string name;
	getline(cin, name); // nhap ho ten
	int a = name.find_last_of(" "); // tim dau cach cc
	string s = name.substr(a + 1, 100); // lay phan ten chinh 
	name.erase(a, 100); // xoa ten chinh
    // Đếm số dấu cách thừa ở đầu chuỗi, để bắt đầu xử lý từ ký tự đầu tiên không phải khoảng trắng.
	int y = 0;
	for (int i = 0; i < name.length(); i++){
		y++;if (name.at(i) != ' ')break;
	}
    // Duyệt từng ký tự trong phần họ và tên đệm
	for (int i = y-1; i < name.length()-1; i++) {
		if (name.at(i) == ' ' && name.at(i+1) == ' ')
			continue;
		if (i == 0 || name.at(i-1) == ' ') {
			name.at(i) = toupper(name.at(i)); 
            cout << name.at(i);
		}
		else {
			name.at(i) = tolower(name.at(i)); 
            cout << name.at(i);
		}
		
	}
    // Nếu ký tự cuối không phải khoảng trắng thi in ra nó sau khi chuyển thành chữ thường
	if (name.at(name.length() - 1) != ' ') {
		name.at(name.length() - 1) = tolower(name.at(name.length() - 1));
		cout << name.at(name.length() - 1);
	}
	cout << ", ";
    // in ra chữ in hoa toàn bộ.
	for (int i = 0; i < s.length(); i++) {
		s.at(i) = toupper(s.at(i)); 
        cout << s.at(i);
	}
}