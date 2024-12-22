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
    int m, a, b, c;
    cin >> m >> a >> b >> c;
    
    int row1 = min(m, a);
    int row2 = min(m, b);

    int rem1 = m - row1;
    int rem2 = m - row2;

    int c_monkey = min(c, rem1 + rem2);

    int total = row1 + row2 + c_monkey;

    cout << total << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    tc{
        solve();
    }

    return 0;
}