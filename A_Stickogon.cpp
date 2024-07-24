// Problem link : https://codeforces.com/contest/1957/problem/A

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
        int n;
        cin >> n;

        vector<int> v(n);
        map<int,int> mp;

        for(auto &it : v){
            cin >> it;
            mp[it]++;
        }

        int cnt = 0;
        for(auto &it : mp){
            cnt += (it.second / 3);
        }

        cout << cnt << endl;

    }

    return 0;
}
