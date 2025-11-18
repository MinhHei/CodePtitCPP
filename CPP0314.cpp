#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    cin.ignore();
    set<string> st;
    string s;
    for(int i=0;i<n;i++){
        getline(cin,s);
        st.insert(s);
    }
    cout << st.size() << endl;
}