// Problem link : https://codeforces.com/problemset/problem/1411/B

// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t;cin >> t;while(t--)

bool isFair(int num) {
    int original = num;
    while (num > 0) {
        int digit = num % 10;
        if (digit != 0 && original % digit != 0) {
            return false;
        }
        num /= 10;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    int num = n;

    while (!isFair(num)) {
        num++;
    }

    cout << num << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    tc {
        solve();
    }

    return 0;
}
