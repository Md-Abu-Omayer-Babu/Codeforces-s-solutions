// Problem link : https://codeforces.com/contest/1811/problem/A

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
    int n;
    cin >> n;

    char d;
    cin >> d;

    string s;
    cin >> s;

    bool flag = true;
    
    for(int i = 0; i < n; i++){
        if(flag && s[i] < d){
            cout << d;
            flag = false;
        }

        cout << s[i];
    }

    if(flag){
        cout << d;
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