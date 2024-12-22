// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t; cin >> t; while (t--)

void solve() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int dist = a + b + c;

    int total = 0;
    int day = 0;

    int full = (n - 1) / dist;

    total = full * dist;
    day = full * 3;

    if (total < n) {
        day++;
        total += a;
        if (total >= n) {
            cout << day << endl;
            return;
        }
        day++;
        total += b;
        if (total >= n) {
            cout << day << endl;
            return;
        }
        day++;
        total += c;
    }

    cout << day << endl;

}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    tc {
        solve();
    }

    return 0;
}