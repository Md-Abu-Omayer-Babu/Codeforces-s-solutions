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
    int n, x, y;
    cin >> n >> x >> y;
    
    int sum = 0;
    vector<int> v(n);
    for(auto &it : v){
        cin >> it;
        sum += it;
    }
    
    int low = sum - y;
    int high = sum - x;
    
    sort(v.begin(), v.end());
    
    int cnt = 0;

    for(int i = 0; i < n; ++i){
        int new_low = low - v[i];
        int new_high = high - v[i];
        
        int left = lower_bound(v.begin() + i + 1, v.end(), new_low) - v.begin();
        int right = upper_bound(v.begin() + i + 1, v.end(), new_high) - v.begin();
        
        cnt += (right - left);
    }
    
    cout << cnt << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    tc {
        solve();
    }

    return 0;
}
