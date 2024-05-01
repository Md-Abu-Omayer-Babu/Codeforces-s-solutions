// Problem link : https://codeforces.com/contest/1972/problem/A

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

        vector<int> a(n);
        vector<int> b(n);

        for(auto &it : a){
            cin >> it;
        }

        for(auto &it : b){
            cin >> it;
        }

        int cnt  = 0;

        for(int i = 0; i < n - cnt; i++){
            for(int j = cnt + 1; j < n; j++){
                if(b[j] < a[i]){
                    cnt++;
                }else{
                    break;
                }
            }
        }

        cout << cnt << endl;

    }

    return 0;
}
