#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {

        vector<int> original;
        int n;
        cin >> n;
        bool even = false, odd = false;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            original.push_back(x);
            if(x % 2 == 0){
                even = true;
            }else{
                odd = true;
            }

        }
        if(even & odd){
            sort(original.begin(), original.end());

        }
        for(int i = 0; i< n; i++){
            cout << original[i] << " ";
        }
        cout << "" << endl;
        }




}
