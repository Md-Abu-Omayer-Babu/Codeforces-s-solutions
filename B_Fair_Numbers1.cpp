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

    if (n == 0) {
        cout << 0 << endl;
        return;
    }

    int num = n;

    while(true){
        n = num;
        vector<int> v;
        while(n > 0){
            int last = n % 10;
            v.push_back(last);
            n /= 10;
        }

        bool divisible = true;

        for(auto &it : v){
            if(it != 0 && num % it != 0){
                divisible = false;
                break;
            }
        }

        if(divisible){
            cout << num << endl;
            return;
        }

        num++;
        v.clear();
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    tc{
        solve();
    }

    return 0;
}
