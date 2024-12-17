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
    int n;
    cin >> n;

    vector<pair<int, int>> a(n), b(n), c(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i;
    }
    for(int i = 0; i < n; i++){
        cin >> b[i].first;
        b[i].second = i;
    }
    for(int i = 0; i < n; i++){
        cin >> c[i].first;
        c[i].second = i;
    }


    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    sort(c.rbegin(), c.rend());

    int ans = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                if (a[i].second != b[j].second && 
                    a[i].second != c[k].second && 
                    b[j].second != c[k].second) {
                    ans = max(ans, a[i].first + b[j].first + c[k].first);
                }

            }
        }
    }

    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    tc {
        solve();
    }

    return 0;
}
