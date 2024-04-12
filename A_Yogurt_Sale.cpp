// Problem link : https://codeforces.com/contest/1955/problem/A

// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"
 
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t;cin >> t;while(t--)

int32_t main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);

    tc{
        int n, a, b;
        cin >> n >> a >> b;

        int single = n * a;
        int promotion = (n / 2) * b + (n % 2) * a;
        int mini_price = min(single, promotion);

        cout << mini_price << endl;
    }

    return 0;
}
