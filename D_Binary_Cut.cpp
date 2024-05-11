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
    string s;
    cin >> s;

    int cnt = 1;

    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] != s[i + 1]){
            cnt++;
        }
    }

    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] == '0' && s[i + 1] == '1'){
            cnt--;
            break;
        }
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