// Problem link : https://codeforces.com/contest/1976/problem/B

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

    vector<int> a(n);
    vector<int> a_copy(n);
    vector<int> b(n + 1);

    for(auto &it : a){
        cin >> it;
    }
    for(auto &it : b){
        cin >> it;
    }

    int cnt = 0;
    int flag = 0;
    int mini = INT_MAX;
    int last = b[n];

    for(int i = 0; i < n; i++){
        cnt += abs(a[i] - b[i]);
        
        int mn = min(a[i], b[i]);
        int mx = max(a[i], b[i]);

        if(last >= mn && last <= mx){
            flag = 1;
        }

        mini = min(mini, abs(a[i] - last));
        mini = min(mini, abs(b[i] - last));

    }
    
    if(flag){
        cnt++;
    }else{
        cnt += (mini + 1);
    }

    cout << cnt << endl;

}

int32_t main(){
    tc{
        solve();
    }
    return 0;
}
