// Problem link : https://codeforces.com/contest/1921/problem/C

// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

int32_t main() {
    int t;
    cin >> t;
    while(t--) {
        int n, f, a, b;
        cin >> n >> f >> a >> b;
        
        vector<int> v(n + 1);
        v[0] = 0;
        for(int i = 1; i <= n; i++){
            cin >> v[i];
        }

        for(int i = 1; i <= n; i++){
            f -= min((v[i] - v[i - 1]) * a, b);
        }

        f > 0 ? puts("YES") : puts("NO");

    }

    return 0;
}
