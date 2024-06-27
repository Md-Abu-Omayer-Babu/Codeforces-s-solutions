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
    int l, r;
    cin >> l >> r;

    int cnt = 0;
    while(r > 1){
        cnt++;
        r = (r / 2);
    }

    cout << cnt << endl;

}

int32_t main(){
    tc{
        solve();
    }
    return 0;
}