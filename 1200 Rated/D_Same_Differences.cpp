// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t; cin >> t; while (t--)

void solve(){
    int n;
    cin >> n;
    
    vector<int> v(n), a(n), b(n);
    for(auto &it : v){
        cin >> it;
    }
    
    int cnt = 0;
    
    // for(int i = 0; i < v.size(); i++){
    //     for(int j = i + 1; j < v.size(); j++){
    //         if(i < j && v[j] - v[i] == j - i){
    //             cnt++;
    //         }
    //     }
    // }
    
    // cout << cnt << endl;

    unordered_map<int, int> freq;

    for(int i = 0; i < v.size(); i++){
        cnt += (freq[v[i] - i]++);
    }

    cout << cnt << endl;
    
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    tc {
        solve();
    }

    return 0;
}
