#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t; cin >> t; while (t--)

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(m);
    for(auto &it : a){
        cin >> it;
    }

    vector<int> q(k);
    for(auto &it : q){
        cin >> it;
    }

    if(k == n - 1){
        int not_present = 1;
        for(int i = 0; i < k; i++){
            if(q[i] == not_present){
                not_present++;
            }else{
                break;
            }
        }

        if(not_present > n){
            not_present = n;
        }

        string res;
        res.reserve(m);

        for(int i = 0; i < m; i++){
            if(a[i] == not_present){
                res += '1';
            }else{
                res += '0';
            }
        }
        cout << res << endl;
    }else if(k == n){
        for(int i = 0; i < m; i++){
            cout << '1';
        }
        cout << endl;
    }else{
        for(int i = 0; i < m; i++){
            cout << '0';
        }
        cout << endl;
    }

}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    tc {
        solve();
    }

    return 0;
}
