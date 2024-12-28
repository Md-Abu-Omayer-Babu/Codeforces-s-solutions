// Problem link: https://codeforces.com/problemset/problem/501/B

// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"
 
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define debug(var) cerr << #var" = " << var << " \n"
#define tc int t;cin >> t;while(t--)

void solve(){
    int n;
    cin >> n;

    vector<pair<string, string> > v(n);

    for(auto &it : v){
        cin >> it.first >> it.second;
    }


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(v[i].second == v[j].first){
                v[j].first = v[i].first;
            }
        }
    }

    set<string> st;
    for(int i = 0; i < n; i++){
        st.insert(v[i].first);
    }

    vector<pair<string, string> > ans;

    for(auto &it : st){
        bool taken = false;
        for(int i = n - 1; i >= 0; i--){
            if(it == v[i].first){
                ans.push_back({it, v[i].second});
                taken = true;
            }
            if(taken){
                break;
            }
        }
    }
    
    cout << ans.size() << endl;
    for(auto &it : ans){
        cout << it.first << " " << it.second << endl;
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