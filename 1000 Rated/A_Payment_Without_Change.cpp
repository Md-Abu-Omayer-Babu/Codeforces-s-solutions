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

void solve() {
    int a, b, n, s;
    cin >> a >> b >> n >> s;

    int max_n_coins = min(s / n, a);
    int left = s - max_n_coins * n;

    if(left <= b){
        yes;
        return;
    }

    no;
    return;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);

    tc{
        solve();
    }

    return 0;
}