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
        int n;
        cin >> n;
        int max = -1;

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x >= max){
                max = x;
            }
        }
        cout << (max * n) << endl;
    }
}
