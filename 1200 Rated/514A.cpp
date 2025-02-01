// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t; cin >> t; while (t--)

void solve() {
    int n;
    cin >> n;

    int original = n;

    int first = 0;
    int digit_count = 0;

    while(n){
        first = n % 10;
        n /= 10;
        digit_count++;
    }

    int original_digits = 0;

    vector<int> mini;

    while(original){
        original_digits = original % 10;
        int c = min(original_digits, 9 - original_digits);

        mini.push_back(c);
        original /= 10;
    }

    if(original_digits == 9){
        cout << 9;
    }else{
        cout << min(original_digits, 9 - original_digits);
    }

    reverse(mini.begin(), mini.end());

    for(int i = 1; i < mini.size(); i++){
        cout << mini[i];
    }

    cout << endl;
    
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // tc {
        solve();
    // }

    return 0;
}
