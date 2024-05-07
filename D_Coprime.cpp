// Problem link : https://codeforces.com/problemset/problem/1742/D

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
        vector<int> pairs[1001];
        
        for(int i = 1; i <= 1000; i++){
            for(int j = 1; j <= 1000; j++){
                if(__gcd(i, j) == 1){
                    pairs[i].push_back(j);
                }
            }
        }

        int n;
        cin >> n;

        vector<int> index[1001];
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            index[x].push_back(i + 1);
        }

        int ans = -1;

        for(int i = 0; i < 1001; i++){
            for(auto &it : pairs[i]){
                if(!index[i].empty() && !index[it].empty()){
                    ans = max(ans, index[i].back() + index[it].back());
                }
            }
        }

        cout << ans << endl;
        
    }

    return 0;
}
