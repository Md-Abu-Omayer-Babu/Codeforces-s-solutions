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

    vector<int> a(n), b(n);
    for(auto &it : a){
        cin >> it;
    }

    for(auto &it : b){
        cin >> it;
    }

    vector<int> ans(n + 1, 0);

    for(int i = 0; i < n; i++){
        ans[i + 1] = max(ans[i + 1], ans[i]);
        if (i + 1 < n) {
            ans[i + 1] = max(ans[i + 1], ans[i] + a[i] - b[i + 1]);
        } else {
            ans[i + 1] = max(ans[i + 1], ans[i] + a[i]);
        }
    }

    cout << ans[n] << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    tc {
        solve();
    }

    return 0;
}
