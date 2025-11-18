#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n ; cin >> n;
        deque<int> dq;
        for(int i=0;i<n;i++){
            int x; cin >> x;
            dq.push_back(x);
        }
        int mer = 0;
        while(dq.size()>1){
            if(dq.front() == dq.back()){
                dq.pop_front();
                dq.pop_back();
            }
            else if(dq.front() < dq.back()){
                int first = dq.front(); dq.pop_front();
                int second = dq.front(); dq.pop_front();
                dq.push_front(first+second);
                mer++;
            }
            else{
                int last1 = dq.back(); dq.pop_back();
                int last2 = dq.back(); dq.pop_back();
                dq.push_back(last1+last2);
                mer++;
            }
        }
        cout << mer << endl;
    }
}