// Problem link : https://codeforces.com/contest/1951/problem/A

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

    string s;
    cin >> s;

    int one = count(s.begin(), s.end(), '1');
        
    if(one & 1){
        no;
        return;
    }
    
    if(one == 2){
        for(int i = 0; i < n; i++){
            if(s[i] == '1' && s[i + 1] == '1'){
                no;
                return;
            } 
        }
    }

    yes;
    return;

}
 
int32_t main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);

    tc{
        solve();
    }

    return 0;
}