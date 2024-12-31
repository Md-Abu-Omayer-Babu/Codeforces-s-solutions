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
    int n, m;
    cin >> n >> m;

    if(m % n){
        cout << -1 << endl;
        return;
    }

    int cnt = 0;

    int res = m / n;
    while(res % 2 == 0){
        cnt++;
        res /= 2;
    }

    while(res % 3 == 0){
        cnt++;
        res /= 3;
    }

    if(res != 1){
        cout << -1 << endl;
        return;
    }

    cout << cnt << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);

    // tc{
        solve();
    // }

    return 0;
}