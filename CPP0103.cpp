#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n;
    cin >> n;
    float s = 0;
    for(int i=1;i<=n;i++){
        s +=(float)1/i;
    }
    cout << fixed << setprecision(4) << s << endl;
}