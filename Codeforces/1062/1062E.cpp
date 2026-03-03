#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        long long n, k, x;
        cin >> n >> k >> x;
        vector<long long> friends(n);
        for (int i = 0; i < n; i++) cin >> friends[i];
        sort(friends.begin(), friends.end());

        long long l = 0, r = x;
        while (l < r) {
            long long mid = (l + r + 1) / 2;
            long long counter = 0;

            // left boundary [0, a[0]-mid]
            if (friends[0] - mid >= 0) counter += friends[0] - mid + 1;
            // gaps between friends
            for (int i = 1; i < n; i++) {
                long long lo = friends[i-1] + mid, hi = friends[i] - mid;
                if (hi >= lo) counter += hi - lo + 1;
            }
            // right boundary [a[n-1]+mid, x]
            if (friends[n-1] + mid <= x) counter += x - (friends[n-1] + mid) + 1;

            if (counter >= k) l = mid;
            else r = mid - 1;
        }

        long long m = l;
        long long step = max(m, 1LL); // prevent overlap at friend positions when m=0
        vector<long long> ans;

        // left boundary
        for (long long p = 0; p <= friends[0] - m && (int)ans.size() < k; p++)
            ans.push_back(p);
        // gaps
        for (int i = 1; i < n && (int)ans.size() < k; i++) {
            long long lo = friends[i-1] + step, hi = friends[i] - m;
            for (long long p = lo; p <= hi && (int)ans.size() < k; p++)
                ans.push_back(p);
        }
        // right boundary
        for (long long p = friends[n-1] + step; p <= x && (int)ans.size() < k; p++)
            ans.push_back(p);

        for (int i = 0; i < k; i++) cout << ans[i] << " ";
        cout << "\n";
    }
}
