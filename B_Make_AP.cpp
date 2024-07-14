// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t; cin >> t; while(t--)

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    if (((2 * b - c) % a == 0 && (2 * b - c) / a > 0) || 
        ((a + c) % (2 * b) == 0 && (a + c) / (2 * b) > 0) || 
        ((2 * b - a) % c == 0 && (2 * b - a) / c > 0)) {
        yes;
        return;
    }

    no;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    tc {
        solve();
    }

    return 0;
}
