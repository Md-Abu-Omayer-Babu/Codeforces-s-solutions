// Problem link : https://codeforces.com/contest/1520/problem/C

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

    if(n == 1){
        cout << 1 << endl;
        return;
    }
    if(n == 2){
        cout << -1 << endl;
        return;
    }
    
    int num = 2;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(num > n * n){
                num = 1;
            }
            cout << num << " ";
            num += 2;
        }
        cout << endl;
    }

}
 
int32_t main(){
    tc{
        solve();
    }

    return 0;

}