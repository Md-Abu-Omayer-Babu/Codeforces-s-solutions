// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t;cin >> t;while(t--)

int pow(int x, int i){
    int result = 1;
    for(int j = 0; j < i; j++){
        result *= x; 
    }

    return result;
}

void solve() {
    int x, n;
    cin >> x >> n;

    int s = 0;
    for(int i = 2; i <= n; i += 2){
        int a = (pow(x, i));
        s += a;
    }

    cout << s << endl;

}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}
