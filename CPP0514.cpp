#include <bits/stdc++.h>

using namespace std;

struct SinhVien{
    string msv,ten,lop,ns;
    float gpa;
};

string chuanHoa(string &s){
    if(s[1] == '/') s = "0" + s;
    if(s[4] == '/') s.insert(3,"0");
    return s;
}

string check(string &s){
    stringstream ss(s);
    string tmp, res = "";
    while(ss>>tmp){
        tmp[0] = toupper(tmp[0]);
        for(int i=1;i<tmp.size();i++) tmp[i] = tolower(tmp[i]);
        res += tmp + " ";
    }
    res.pop_back();
    return res;
}

void nhap(SinhVien ds[], int n){
    cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin,ds[i].ten);
        getline(cin,ds[i].lop);
        getline(cin,ds[i].ns);
        cin >> ds[i].gpa;
        cin.ignore();
        ds[i].ten = check(ds[i].ten);
        ds[i].ns = chuanHoa(ds[i].ns);
        string num = to_string(i+1);
        while(num.size() < 3) num = "0" + num;
        ds[i].msv = "B20DCCN" + num;
    }
}

void in(SinhVien ds[], int n){
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