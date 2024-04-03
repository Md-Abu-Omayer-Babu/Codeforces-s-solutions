// Problem link : https://codeforces.com/problemset/problem/870/A

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
    int n, m;
    cin >> n >> m;

    vector<int> list_1(n);
    vector<int> list_2(m);

    for(auto &it : list_1){
        cin >> it;
    }
    for(auto &it : list_2){
        cin >> it;
    }

    sort(list_1.begin(), list_1.end());
    sort(list_2.begin(), list_2.end());

    int mini_1 = *min_element(list_1.begin(),list_1.end());
    int mini_2 = *min_element(list_2.begin(),list_2.end());

    for(auto &i : list_1){
        for(auto &j : list_2){
            if(i == j){
                cout << i << endl;
                return;
            }
        }
    }

    cout << min(mini_1, mini_2) << max(mini_1, mini_2) << endl;

}
 
int32_t main(){

    ios_base::sync_with_stdio(0);
	cin.tie(0);

    solve();

    return 0;

}