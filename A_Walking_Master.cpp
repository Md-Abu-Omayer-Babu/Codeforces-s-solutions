// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t;cin >> t;while(t--)

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if(b <= d && c <= a + d - b){
        int move = (d - b) + (a + d - b - c);
        cout << move << endl;
        return;
    }
    
    cout << - 1 << endl;

}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    tc {
        solve();
    }

    return 0;
}
