// Problem link : https://codeforces.com/problemset/problem/1742/D

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
        int n;
        cin >> n;

        vector<pair<int, int>> vp(1001, {0, -1});
        vector<pair<int, int>> pairs;

        vector<int> v(n);
        for(int i = 0; i < v.size(); i++){
            cin >> v[i];
            vp[v[i]] = {v[i], i + 1};
        }

        for(int i = 0; i < vp.size(); i++){
            if(vp[i].first != 0){
                pairs.push_back({vp[i].first, vp[i].second});
            }
        }

        int ans = -1;

        for(int i = 0; i < pairs.size(); i++){
            for(int j = i; j < pairs.size(); j++){
                if(__gcd(pairs[i].first, pairs[j].first) == 1){
                    ans = max(ans, pairs[i].second + pairs[j].second);
                }
            }
        }

        cout << ans << endl;
        
    }

    return 0;
}
