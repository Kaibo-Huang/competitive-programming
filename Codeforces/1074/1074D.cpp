#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        int n, m, h;
        cin >> n >> m >> h;
        vector<int> v;
        vector<int> vCopy;
        set<int> s;
        for(int i = 0; i< n; i++){
            int x;
            cin >> x;
            v.push_back(x);
            vCopy.push_back(x);
        }
        for(int i = 0; i< m; i++){
            int b, c;
            cin >> b >> c;
            b--;
            if(v[b] + c <= h){
                v[b]+=c;
                s.insert(b);
            }else{
                for(int x: s){
                    v[x] = vCopy[x];
                }
                s.clear();
            }
        }

        for(int i = 0; i< n; i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
}
