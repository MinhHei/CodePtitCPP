#include <bits/stdc++.h>

using namespace std;

struct MatHang{
    int ma;
    string mh,nh;
    double gm,gb;
    double ln(){
        return gb-gm;
    }
};

bool cmp(MatHang a, MatHang b){
    return a.ln() > b.ln();
}

int main(){
    int n; cin >> n;
    cin.ignore();
    vector<MatHang> ds(n);
    for(int i=0;i<n;i++){
        ds[i].ma = i+1;
        getline(cin,ds[i].mh);
        getline(cin,ds[i].nh);
        cin >> ds[i].gm >> ds[i].gb;
        cin.ignore();
    }
    sort(ds.begin(),ds.end(),cmp);
    for(auto x : ds){
        cout << x.ma << ' ' << x.mh << ' ' << x.nh << ' ' << fixed << setprecision(2) << x.ln() << endl;
    }
}