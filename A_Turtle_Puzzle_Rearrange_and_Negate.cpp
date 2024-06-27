// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t;cin >> t;while(t--)

int32_t main(){
    tc{
        int n;
        cin >> n;

        int sum = 0;

        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
            sum += abs(v[i]);
        }

        cout << sum << endl;
        
    }

    return 0;
}
