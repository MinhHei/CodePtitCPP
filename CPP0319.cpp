#include <bits/stdc++.h>

using namespace std;

int main(){
    int m,s; cin >> m >> s;
    if(9*m<s||(s==0&&m>1)){
        cout << "-1 -1";
    }
    else{
        int be[m],lon[m];
        int tmp=s;
        for(int i=0;i<m;i++){
            if(s>9){
              lon[i] = 9;
                s -= 9;
            }
            else{
                lon[i] = s;
                s = 0;
            }
        }
        tmp--;
        for(int i=m-1;i>=0;i--){
            if(tmp>9){
                be[i] = 9;
                tmp -= 9;
            }
            else{
               be[i] = tmp;
                tmp = 0;
            }
        }
        be[0] += 1;
        for(int i=0;i<m;i++) cout << be[i];
        cout << " ";
        for(int i=0;i<m;i++) cout << lon[i];
    }
}