#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        int n;
        cin >> n;
        vector<long long> v;

        for(int i = 0; i < n; i++){
            long long x;
            cin >> x;
            v.push_back(x);
        }

    vector<long long> primes = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47, 53};
    bool flag = false;
    for(long long x: primes){
        for(long long y: v){
            if(y%x != 0){
                flag = true;
                break;
            }
        }
        if(flag){
            cout << x << endl;
            break;
        }
    }
    if(!flag){
        cout << -1 << endl;
    }
    }
}
