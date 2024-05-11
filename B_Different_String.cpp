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

    bool impossible = true;

    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] != s[i + 1]){
            impossible = false;
            break;
        }
    }

    if(impossible){
        no;
    }else{
        yes;
        for(int i = 0; i < s.size() - 1; i++){
            if(s[i] != s[i + 1]){
                swap(s[i], s[i + 1]);
            }
        }

        cout << s << endl;
    }

}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    tc {
        solve();
    }

    return 0;
}