// Problem link: https://codeforces.com/problemset/problem/1978/A

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

    int maxi = *max_element(v.begin(), v.end() - 1);

    cout << maxi + v[n - 1] << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    tc{
        solve();
    }
    
    return 0;
}
