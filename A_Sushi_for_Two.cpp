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
    int n;
    cin >> n;

    vector<int> v(n);
    for(auto &it : v){
        cin >> it;
    }

    int cnt = 1;
    int ans = 0;

    vector<int> vc;

    for(int i = 1; i < n; i++){
        if(v[i] != v[i-1]){
            vc.push_back(cnt);
            cnt = 1;
        }else{
           ++cnt;
        }
    }

    vc.push_back(cnt);

    for(int i = 0; i < vc.size() - 1; i++){
        ans = max(ans, min(vc[i], vc[i + 1]));
    }

    cout << ans*2 << endl;

}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}