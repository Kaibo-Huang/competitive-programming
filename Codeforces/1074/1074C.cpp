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

        vector<int> v;
        for(int i = 0; i< n; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());

        int mex = 0;
        int counter = 0;
        int prev = v[0];
        for(int i = 1; i< n; i++){
            if(v[i] == prev + 1){
                counter++;
                mex = max(counter, mex);
            }else if(v[i] == prev){

            }else{
                counter = 0;
            }
            prev = v[i];
        }
        cout << mex + 1 << endl;

    }
}
