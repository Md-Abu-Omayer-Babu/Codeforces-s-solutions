// Problem link : https://codeforces.com/contest/1972/problem/D1

// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t;cin >> t;while(t--)

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    tc {
        int n, m;
        cin >> n >> m;

        int cnt = 0;

        for(int i = 1; i <= m; i++){
            cnt += (n + i) / (i * i);
        }

        cout << cnt - 1 << endl;
        
    }

    return 0;
}
