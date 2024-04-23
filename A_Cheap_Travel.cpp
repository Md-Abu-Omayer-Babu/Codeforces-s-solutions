// Problem link : https://codeforces.com/problemset/problem/466/A

// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"

#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

int32_t main(){
    int t = 1;
    // cin >> t;
    while(t--){
        int n, m, a, b;
        cin >> n >> m >> a >> b;

        int sp_tc = n / m;
        int sp_cost = sp_tc * b;

        int rest_sp = (n % m);
        int rest_single_cost = rest_sp * a;

        int sp_total_cost = sp_cost + min(rest_single_cost, b);
        int single_cost = n * a;

        if(m * a <= b){
            cout << single_cost << endl;
        }else{
            cout << sp_total_cost << endl;
        }

    }

    return 0;
}