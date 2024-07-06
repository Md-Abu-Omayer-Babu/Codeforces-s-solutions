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

    if(mini == maxi){
        no;
        return;
    }

    sort(v.begin(), v.end());
    
    yes;
    cout << maxi << " ";
    cout << mini << " ";

    for(int i = 1; i < n - 1; i++){
        cout << v[i] << " ";
    }
    cout << endl;

}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    tc{
        solve();
    }

    return 0;
}