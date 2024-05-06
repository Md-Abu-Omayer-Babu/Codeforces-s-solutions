// Problem link : https://codeforces.com/contest/556/problem/A

// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int zero = 0;
        int one = 0;

        for(auto &it : s){
            if(it == '0') zero++;
            else one++;
        }

        cout << abs(n - min(one,zero)*2) << endl;

    }

    return 0;
}
