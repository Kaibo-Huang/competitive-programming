#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int T = 1; T <= tc; T++) {
        int n;
        cin >> n;
        string s = "";
        string t = "";
        cin >> s >> t;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s == t){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
}
