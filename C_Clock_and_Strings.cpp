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
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    vector<int> v;
    for(int i = 1; i <= 12; i++){
        v.push_back(i);
    }

    int maxi = max(a, b);
    int mini = min(a,b);

    bool flag = false;

    if((mini < c && maxi > c) && (mini > d || maxi < d)){
        flag = true;
    }else if((mini < d && maxi > d) && (mini > c || maxi < c)){
        flag = true;
    }

    if(flag) yes;
    else no;

}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    tc {
        solve();
    }

    return 0;
}