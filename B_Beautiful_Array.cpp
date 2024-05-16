// Problem link : https://codeforces.com/problemset/problem/1138/A

// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t;cin >> t;while(t--)

void solve(){
    int n, k, b, s;
        cin >> n >> k >> b >> s;

        vector <int> a(n);

        a[0] = k * b;
        s -= k * b;
        if (s < 0) cout << "-1\n";
        else {
            for (int i = 0; i < n; ++i) {
                int now = min(k - 1, s);
                a[i] += now;
                s -= now;
            }
            if (s > 0) cout << "-1\n";
            else {
                for (int i = 0; i < n; ++i) cout << a[i] << " ";
                cout << "\n";
            }
        }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    tc{
        solve();
    }

    return 0;
}