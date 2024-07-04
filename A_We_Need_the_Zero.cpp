// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t;cin >> t;while(t--)

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &it : v) {
        cin >> it;
    }

    for (int x = 0; x < 256; x++) {
        vector<int> b(n);

        for (int i = 0; i < n; i++) {
            b[i] = v[i] ^ x;
        }

        int result = b[0];
        for (int j = 1; j < n; j++) {
            result ^= b[j];
        }

        if (result == 0) {
            cout << x << endl;
            return;
        }
    }

    cout << -1 << endl;
}

int32_t main() {
    tc {
        solve();
    }

    return 0;
}
