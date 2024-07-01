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

    int sum = n * (n + 1) / 2;

    int ans = sum % 2;

    cout << ans << endl;

}

int32_t main(){
    // tc{
        solve();
    // }
    return 0;
}