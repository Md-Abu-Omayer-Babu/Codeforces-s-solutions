// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"

#include<bits/stdc++.h>
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

    sort(v.begin(), v.end());

    if(n&1){
        cout << v[n / 2] << endl;
    }else{
        cout << max(v[n / 2], v[n / 2 - 1]) << endl;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    tc{
        solve();
    }

    return 0;
}