// Problem link: https://codeforces.com/problemset/problem/1979/B

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
    int x, y;
    cin >> x >> y;

    int XOR = x ^ y;

    int length = 1;
    
    while(XOR % 2 == 0){
        XOR >>= 1;
        length <<= 1;
    }

    cout << length << endl;
}

int32_t main(){
    tc{
        solve();
    }

    return 0;
}
