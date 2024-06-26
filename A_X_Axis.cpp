#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t;cin >> t;while(t--)

void solve(){
    int a, b, c;
    cin >> a >> b >> c;

    int ans1 = abs(a - b) + abs(a - c); 
    int ans2 = abs(a - b) + abs(b - c); 
    int ans3 = abs(a - c) + abs(b - c);

    int mini = min({ans1, ans2, ans3});

    cout << mini << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    tc{
        solve();
    }
    
    return 0;
}
