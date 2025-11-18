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

void nhap(PhanSo& a){
    cin >> a.ts >> a.ms;
}

void rutgon(PhanSo& a){
    ll k = gcd(a.ts,a.ms);
    a.ts /= k; a.ms /= k;
}

void in(PhanSo& a){
    cout << a.ts << "/" << a.ms;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}

