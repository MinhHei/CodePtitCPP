#include <bits/stdc++.h>

using namespace std;

string ToMin(string s){
    for(char &c : s){
        if(c == '6') c = '5';
    }
    return s;
}

string ToMax(string s){
    for(char &c : s){
        if(c=='5') c = '6';
    }
    return s;
}

int main(){
    int t; cin >> t;
    while(t--){
        string X1,X2;
        cin >> X1 >> X2;
        string min1 = ToMin(X1);
        string min2 = ToMin(X2);
        string max1 = ToMax(X1);
        string max2 = ToMax(X2);
        long long minSum = stoll(min1) + stoll(min2);
        long long maxSum = stoll(max1) + stoll(max2);
        cout << minSum << ' ' << maxSum << endl;
    }
}