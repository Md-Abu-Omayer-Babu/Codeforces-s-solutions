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

    vector<int> v;

    for(int i = 1; i <= min(n, 10000LL); i++){
        if(n % i == 0){
            v.push_back(i);
        }
    }

    int cnt = 1;
    int temp = 1;

    for(int i = 0; i < v.size() - 1; i++){
        if(v[i] == v[i + 1] - 1){
            temp++;
        }else{
            temp = 1;
        }
        cnt = max(cnt, temp);
    }
    
    cout << cnt << endl;

}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    tc{
        solve();
    }

    return 0;
}