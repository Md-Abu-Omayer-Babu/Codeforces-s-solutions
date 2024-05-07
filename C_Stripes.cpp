// Problem link : https://codeforces.com/contest/1742/problem/C

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
        vector<string> v(8);
        for(int i = 0; i < 8; i++){
            cin >> v[i];
        }

        bool red = false;

        string r = "RRRRRRRR";
        
        for(int i = 0; i < 8; i++){
            if(v[i] == r){
                red = true;
                break;
            }
        }

        if(red){
            cout << "R\n";
        }else{
            cout << "B\n";
        }
    }

    return 0;
}
