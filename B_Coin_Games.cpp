// Problem link : https://codeforces.com/contest/1972/problem/B

// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t;cin >> t;while(t--)

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    tc {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int count_U = 0;
        for(auto &it : s){
            if(it == 'U'){
                count_U++;
            }
        }

        (count_U & 1) ? yes : no;
        
    }

    return 0;
}
