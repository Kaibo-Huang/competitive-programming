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

    while (tc --> 0) {
        int n;
        cin >> n;
        for(int i =1; i<= n; i++){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}