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
    int n, m;
    cin >> n >> m;
    string a;
    cin >> a;

    map<char, int> count;
    for (char c : a) {
        count[c]++;
    }

    int cnt = 0;
    for (char ch = 'A'; ch <= 'G'; ++ch) {
        if (count[ch] < m) {
            cnt += (m - count[ch]);
        }
    }

    cout << cnt << endl;


}

int32_t main(){
    tc{
        solve();
    }
    return 0;
}
