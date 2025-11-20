#include <bits/stdc++.h>

using namespace std;

struct ThucTap{
    int stt;
    string msv,ten,lop,email,cty;
    void in(){
        getline(cin,msv);
        getline(cin,ten);
        getline(cin,lop);
        getline(cin,email);
        getline(cin,cty);
    }
    void out(){
        cout << stt << ' ' << msv << ' ' << ten << ' ' << lop << ' ' << email << ' ' << cty << endl;
    }
};

bool cmp(ThucTap a, ThucTap b){
    return a.ten < b.ten;
}

void test(ThucTap a[],int n){
    string s;
    cin >> s;
    for(int i=0;i<n;i++){
        if(a[i].cty==s) a[i].out();
    }
}

int main(){
    int n; cin >> n;
    cin.ignore();
    ThucTap a[n];
    for(int i=0;i<n;i++){
        a[i].stt = i+1;
        a[i].in();
    }
    sort(a,a+n,cmp);
    int q; cin >> q;
    while(q--){
        test(a,n);
    }
}