#include <bits/stdc++.h>

using namespace std;

struct SinhVien{
    string msv,ten,lop,ns;
    float gpa;
};

void chuanHoa(string &s) {
    if (s[1] == '/') s = "0" + s;
    if (s[4] == '/') s.insert(3, "0");
}

void nhap(SinhVien ds[],int n){
    cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin,ds[i].ten);
        getline(cin,ds[i].lop);
        getline(cin,ds[i].ns);
        cin >> ds[i].gpa;
        cin.ignore();
        string id = to_string(i+1);
        while(id.size() < 3) id = "0" + id;
        ds[i].msv = "B20DCCN" + id;
        chuanHoa(ds[i].ns);
    }
}

void in(SinhVien ds[],int n){
    for(int i=0;i<n;i++){
        cout << ds[i].msv << ' ' << ds[i].ten << ' ' << ds[i].lop << ' ' << ds[i].ns << ' ' << fixed << setprecision(2) << ds[i].gpa << endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}