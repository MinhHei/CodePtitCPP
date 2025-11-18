#include <bits/stdc++.h>

using namespace std;

struct NhanVien{
    string mnv,ten,gt,ns,dc,mst,hd;
    NhanVien(){
        mnv = "00001";
    }
};

void chuanHoa(string &s) {
    if (s[1] == '/') s = "0" + s;       // VD: 1/10/2000 -> 01/10/2000
    if (s[4] == '/') s.insert(3, "0");  // VD: 01/2/2000 -> 01/02/2000
}

void nhap(NhanVien &a){
    getline(cin,a.ten);
    cin >> a.gt >> a.ns;
    chuanHoa(a.ns);
    cin.ignore();
    getline(cin,a.dc);
    cin >> a.mst >> a.hd;
    chuanHoa(a.hd);
}

void in(NhanVien &a){
    cout << a.mnv << ' ' << a.ten << ' ' << a.gt << ' ' << a.ns << ' ' << a.dc << ' ' << a.mst << ' ' << a.hd << endl;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}

