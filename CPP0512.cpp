#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct PhanSo{
    ll tu,mau;
};

ll gcd(ll a, ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}

void rutgon(PhanSo &a){
    ll k = gcd(a.tu,a.mau);
    a.tu /= k;
    a.mau/= k;
}
void process(PhanSo a, PhanSo b){
    PhanSo c;
    PhanSo d;
    c.mau = (ll)a.mau * (ll)b.mau;
    c.tu = (ll)a.tu*b.mau + (ll)b.tu*a.mau;
    rutgon(c);
    PhanSo c1;
    c1.tu =(ll) c.tu * c.tu;
    c1.mau = (ll) c.mau * c.mau;
    rutgon(c1);
    d.tu= (ll) a.tu * b.tu * c1.tu;
    d.mau = (ll) a.mau * b.mau * c1.mau;
    rutgon(d);
    cout << c1.tu << "/" << c1.mau << ' ' << d.tu << "/" << d.mau << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
