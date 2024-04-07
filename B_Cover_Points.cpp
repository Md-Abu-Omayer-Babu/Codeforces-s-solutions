// Problem link : https://codeforces.com/problemset/problem/1047/B

// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"
 
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t;cin >> t;while(t--)
 
int32_t main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);

    int cnt = 0;
    tc{
        int x, y;
        cin >> x >> y;


        cnt = max(cnt, x + y);

    }

    cout << cnt << endl;

    return 0;
}