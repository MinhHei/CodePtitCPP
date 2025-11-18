#include <bits/stdc++.h>

using namespace std;

struct SinhVien{
    string ten,lop,ns,msv;
    float gpa;
    SinhVien(){
        msv = "B20DCCN001";
    }
};

void nhap(SinhVien &a){
    getline(cin,a.ten);
    cin >> a.lop >> a.ns >> a.gpa;
    if(a.ns[1] == '/') a.ns = "0" + a.ns;
    if(a.ns[4] == '/') a.ns.insert(3,"0");
}

void in(SinhVien &a){
    cout << a.msv << ' ' << a.ten << ' ' << a.lop << ' ' << a.ns << ' ' << fixed << setprecision(2) << a.gpa << endl;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}