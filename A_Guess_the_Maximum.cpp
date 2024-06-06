// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define tc int t;cin >> t;while(t--)

int32_t main(){
    tc{
        int n;
        cin >> n;

        vector<int> v(n);
        for(auto &it : v){
            cin >> it;
        }

        int maxi = 0;
        int ans = INT_MAX;

        for(int i = 0; i < n - 1; i++){
            maxi = max(v[i], v[i + 1]);
            ans = min(maxi, ans);
        }

        cout << ans - 1 << endl;
    }

    return 0;
}
