#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int s = n*(1+n)/2;
        cout << s << endl;
    }
}