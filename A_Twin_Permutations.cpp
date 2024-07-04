// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t;cin >> t;while(t--)

void solve(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(auto &it : v){
        cin >> it;
    }

    int mini = *min_element(v.begin(), v.end());
    int maxi = *max_element(v.begin(), v.end());

    int sum = mini + maxi;

    for(int i = 0; i < n; i++){
        cout << sum - v[i] << " ";
    }
    cout << endl;

}

int32_t main(){
    tc{
        solve();
    }

    return 0;
}