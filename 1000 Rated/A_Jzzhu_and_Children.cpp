// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"
 
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t;cin >> t;while(t--)

void solve(){
    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    bool isUnderZero = true;

    while(isUnderZero){
        isUnderZero = false;
        for(int i = 0; i < n; i++){
            v[i] -= m;
        }

        for(int i = 0; i < n; i++){
            if(v[i] > 0){
                isUnderZero = true;
                break;
            }
        }

        if(!isUnderZero){
            for(int i = 0; i < n; i++){
                v[i] += m;
            }
            break;
        }
    }

    for(int i = n - 1; i >= 0; i--){
        if(v[i] > 0){
            cout << i + 1 << endl;
            return;
        }
    }

}

int32_t main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);

    // tc{
        solve();
    // }

    return 0;
}