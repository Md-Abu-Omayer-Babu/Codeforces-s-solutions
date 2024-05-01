// Problem link : https://codeforces.com/contest/1966/problem/C

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
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int maxi = *max_element(v.begin(), v.end());

    int mini = 1;

    for(auto &it : v){
        if(it == mini){
            mini++;
        }
    }
    
    cout << ((min(mini, maxi) & 1) ? "Alice" : "Bob") << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    tc {
        solve();
    }

    return 0;
}
