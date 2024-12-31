// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"
 
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define debug(var) cerr << #var" = " << var << endl
#define tc int t;cin >> t;while(t--)

void solve() {
    string s, t;
    cin >> s >> t;

    int n = s.size();
    int m = t.size();
    
    int gcd = __gcd(n, m);

    string s1 = "";
    string s2 = "";

    int k = m /gcd;
    while(k--){
        s1 += s;
    }

    k = n / gcd;
    while(k--){
        s2 += t;
    }

    cerr << s1 << " " << s2 << endl;

    if(s1 == s2){
        cout << s1 << endl;
        return;
    }

    cout << -1 << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);

    tc{
        solve();
    }

    return 0;
}