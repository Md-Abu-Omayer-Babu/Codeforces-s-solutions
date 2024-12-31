// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"
 
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define debug(var) cerr << #var" = " << var << endl
#define tc int t;cin >> t;while(t--)

void solve() {
    int n;
    string s;
    cin >> n >> s;

    vector<int> cnt(26, 0), p(26, 0);
    for(auto &it : s){
        cnt[it - 'a']++;
    }
    int ans = 0;
    for(auto &it : s){
        --cnt[it - 'a'];
        ++p[it - 'a'];
        int cur = 0;
        for(int i = 0; i < 26; ++i) {
            cur += min(1LL, cnt[i]) + min(1LL, p[i]);
        }
        ans = max(ans, cur);
    }
    cout << ans << "\n";
}   

int32_t main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);

    tc{
        solve();
    }

    return 0;
}