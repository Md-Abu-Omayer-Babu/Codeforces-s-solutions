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

        vector<int> v(n - 1);
        for(auto &it : v){
            cin >> it;
        }

        int maxi_1 = *max_element(v.begin(), v.end()) + 1;
        cout << maxi_1 << " ";

        for(auto &it : v){
            maxi_1 += it;
            cout << maxi_1 << " ";
        }

        cout << endl;
        
    }

    return 0;
}
