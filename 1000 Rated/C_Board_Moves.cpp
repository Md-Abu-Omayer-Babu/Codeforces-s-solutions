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

    int ans = 0;

    if(n == 1){
        cout << ans << endl;
        return;
    }

    n /= 2;


    ans = n * (n + 1) * (2 * n + 1);
    ans /= 6;

    cout << 8 * ans << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);

    tc{
        solve();
    }

    return 0;
}