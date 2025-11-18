#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll gcd(ll a, ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}

struct PhanSo{
   ll ts,ms;
};

void nhap(PhanSo &a){
    cin >> a.ts >> a.ms;
}

void rutgon(PhanSo &a){
    ll k = gcd(a.ts,a.ms);
    a.ts /= k; a.ms /= k;
}

PhanSo tong(PhanSo a, PhanSo b){
    PhanSo res;
    res.ms = (ll)a.ms * (ll)b.ms;
    res.ts = (ll)a.ts*b.ms + (ll)b.ts*a.ms;
    rutgon(res);
    return res;
}

void in(PhanSo &a){
    cout << a.ts << "/" << a.ms << endl;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}

