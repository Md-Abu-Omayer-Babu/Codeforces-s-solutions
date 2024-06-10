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

    bool same = false;

    if(v[0] == v[n - 1]){
        same = true;
    }

    if(same){
        no;
        return;
    }

    yes;

    int red_index = 0;

    if(v[1] == v[n - 1]){
        red_index = 1;
    }else{
        red_index = 0;
    }

    for(int i = 0; i < n; i++){
        if(i == red_index){
            cout << 'R';
        }else{
            cout << 'B';
        }
    }
    cout << endl;

    
}

int32_t main(){
    tc{
        solve();
    }

    return 0;
}
