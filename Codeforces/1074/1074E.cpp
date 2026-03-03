#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        int n, m, k;
        string s;
        cin >> n >> m >> k;
        vector<int> a, b;
        unordered_map<int, unordered_set<int>> distanceLeft;
        unordered_map<int, unordered_set<int>> distanceRight;
        unordered_map<int, int> leftDistance;
        unordered_map<int, int> rightDistance;
        for(int i = 0 ; i < n; i++){
            int x;
            cin >> x;
            a.push_back(x);
        }
        for(int i = 0 ; i < m; i++){
            int x;
            cin >> x;
            b.push_back(x);
        }
        cin >> s;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int ap = 0, bp = 0;
        //a - robot, b - spike
        for(int ap = 0; ap < n; ap++){
            while(bp < m && b[bp] <= a[ap]) bp++;
            if(bp < m){
                distanceRight[b[bp] - a[ap]].insert(a[ap]);
                rightDistance[a[ap]] = b[bp] - a[ap];
            }
        }
        bp = m - 1;
        for(int ap = n - 1; ap >= 0; ap--){
            while(bp >= 0 && b[bp] >= a[ap]) bp--;
                if(bp >= 0){
                    distanceLeft[a[ap] - b[bp]].insert(a[ap]);
                    leftDistance[a[ap]] = a[ap] - b[bp];
                }
            }
        int place = 0, num = n;
        for(int i = 0; i < s.length(); i++){
            place = s[i] == 'R'? place + 1 : place - 1;
            if(place < 0){

                for(int robot: distanceLeft[place * -1]){
                    distanceRight[rightDistance[robot]].erase(robot);
                }
                num-=distanceLeft[place * -1].size();
                distanceLeft[place * -1].clear();

            }else if(place > 0){
                for(int robot: distanceRight[place]){
                    distanceLeft[leftDistance[robot]].erase(robot);
                }
                num-=distanceRight[place].size();
                distanceRight[place].clear();
            }
            cout << num << " ";
        }
        cout << endl;

    }
}
