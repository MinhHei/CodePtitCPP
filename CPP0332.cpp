#include <bits/stdc++.h>

using namespace std;

int main() {
	string name;
	getline(cin, name); // nhap toan bo ten nguoi dung
	int a = name.find_last_of(" "); // tim dau cach cuoi cung trong chuoi name
	string s = name.substr(a + 1, 100); // lay ten chinh 
	name.erase(a, 100); // xoa ten chinh 
    // Chuyen tat ca cac ki tu thanh chu thuong roi in ra
	for (int i = 0; i < s.length(); i++) {
		s.at(i) = tolower(s.at(i)); cout << s.at(i);
	}
    // lay chu cai dau cua moi tu, doi sang chu thuong va in ra
	for (int i = 0; i < name.length(); i++)
		if (i == 0 || name[i - 1] == ' ') {
			name.at(i) = tolower(name.at(i)); cout << name.at(i);
		}
	cout << "@ptit.edu.vn";
	return 0;
}