// Problem link : https://codeforces.com/problemset/problem/1790/A

// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"
 
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t;cin >> t;while(t--)

int32_t main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);

    tc{
        string s;
        cin >> s;

        string PI = "3141592653589793238462643383279502884197";
        
        int cnt = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == PI[i]){
                cnt++;
            }else{
                break;
            }
        }
        
        cout << cnt << endl;

    }

    return 0;
}
