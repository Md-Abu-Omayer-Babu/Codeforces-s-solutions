// Problem link : https://codeforces.com/problemset/problem/1969/B

// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"
 
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t;cin >> t;while(t--)

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    tc {
        string s;
        cin >> s;

        int cost = 0;
        int zero = 1;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0'){ 
                zero++;
            }else{
                break;
            }
        }

        for(int i = zero - 1; i < s.size(); i++){
            if(s[i] == '0'){
                cost += (i - zero + 2);
                zero++;
            }
        }

        cout << cost << endl;

    }

    return 0;
}
