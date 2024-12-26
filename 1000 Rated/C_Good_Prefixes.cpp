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

void solve(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(auto &it : v){
        cin >> it;
    }

    int cnt = 0;
    if(n == 1 && v[0] != 0){
        cout << 0 << endl;
        return;
    }

    int sum = 0, maxi = 0;
    for(int i = 0; i < n; i++){
        sum += v[i];
        maxi = max(maxi, v[i]);
        if(sum - maxi == maxi){
            cnt++;
        }
    }
    
    cout << cnt << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);

    tc{
        solve();
    }

    return 0;
}