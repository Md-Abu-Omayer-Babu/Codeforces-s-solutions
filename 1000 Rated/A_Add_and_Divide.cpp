// Problem link : https://codeforces.com/problemset/problem/1485/A

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
    int a, b;
    cin >> a >> b;

    int cnt = INT_MAX;
    for(int i = 0; i < 30; i++){
        if(b + i == 1) continue;

        int x = a;
        int cur = i;
        while(x){
            cur++;
            x /= (b + i);
        }

        cnt = min(cnt, cur);
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