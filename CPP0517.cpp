#include <bits/stdc++.h>

using namespace std;

struct NhanVien {
    string mnv, ten, gt, ns, dc, mst, hd;
};

void chuanHoa(string &s) {
    if (s[1] == '/') s = "0" + s;
    if (s[4] == '/') s.insert(3, "0");
}

int dem = 0;

void nhap(NhanVien &a) {
    dem++; 
    a.mnv = to_string(dem);
    while(a.mnv.size() < 5) {
        a.mnv = "0" + a.mnv;
    }
    cin.ignore(); 
    getline(cin, a.ten);
    cin >> a.gt >> a.ns;
    chuanHoa(a.ns);
    cin.ignore();
    getline(cin, a.dc);
    cin >> a.mst >> a.hd;
    chuanHoa(a.hd);
}

void inds(NhanVien ds[], int N) {
    for (int i = 0; i < N; i++) {
        cout << ds[i].mnv << " " 
             << ds[i].ten << " " 
             << ds[i].gt << " " 
             << ds[i].ns << " " 
             << ds[i].dc << " " 
             << ds[i].mst << " " 
             << ds[i].hd << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}