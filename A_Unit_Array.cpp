// Problem link : https://codeforces.com/problemset/problem/1834/A

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

    int minus = 0, plus = 0;
    int sum = 0, prod = 1;

    vector<int> v(n);
    for(auto &it : v){
        cin >> it;
        it == -1 ? minus++ : plus++;
        sum += it;
        prod *= it;
    }
 
    int operations = 0;
 
    while(true){
        if(sum >= 0 && prod == 1){
            break;
        }else{
            sum += 2;
            prod *= -1;
            operations++;
        }
    }
 
    cout << operations << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    tc {
        solve();
    }

    return 0;
}