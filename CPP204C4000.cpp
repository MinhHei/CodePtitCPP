#include <bits/stdc++.h>

using namespace std;

struct SinhVien{
    string msv, ten, lop, ns;
    float gpa;
    SinhVien(){
        msv = "N20DCCN001";
    }
};

string chuanHoa(string &s){
    int p1 = s.find('/');
    int p2 = s.find('/', p1 + 1);
    if (p1 == 1) { 
        s.insert(0, "0");
        p1++;
        p2++;
    }
    if (p2 - p1 == 2) { 
        s.insert(p1 + 1, "0");
    }
    return s;
}

void nhapThongTinSV(SinhVien &a){
    getline(cin,a.ten);
    cin >> a.lop >> a.ns;
    cin >> a.gpa;
    a.ns = chuanHoa(a.ns);
}

void inThongTinSV(SinhVien &a){
    cout << a.msv << ' ' << a.ten << ' ' << a.lop << ' ' << a.ns << ' ' << fixed << setprecision(2) << a.gpa << endl;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}