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
    string s;
    cin >> s;

    reverse(s.begin(), s.end());

    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'p'){
            cout << 'q';
        }else if(s[i] == 'q'){
            cout << 'p';
        }else if(s[i] == 'w'){
            cout << 'w';
        }
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