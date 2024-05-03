// Problem link : https://codeforces.com/contest/1968/problem/B

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

        string a, b;
        cin >> a >> b;
        
        int k = 0;
        for (int i = 0, j = 0; i < n && j < m; ++j){
            if(a[i] == b[j]){
                ++k;
                ++i;
            }
        }
        cout << k << endl;
        
    }

    return 0;
}
