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

        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int cnt = 0;

        for(int i = 0; i < n; i++){
            if(v[v[i] - 1] == i + 1){
                cnt++;
            }
        }
        
        if(cnt >= 1){
            cout << 2 << endl;
        }else{
            cout << 3 << endl;
        }

    }

    return 0;
}
