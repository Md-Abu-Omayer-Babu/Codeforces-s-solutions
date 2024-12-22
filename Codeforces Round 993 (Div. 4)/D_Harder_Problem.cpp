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

    vector<int> v(n);
    for(auto &it : v){
        cin >> it;
    }

    queue<int> unused;

    for(int i = 1; i <= n; ++i){
        unused.push(i);
    }

    vector<int> b(n);

    unordered_map<int, int> freq;
    
    for(int i = 0; i < n; ++i){
        if(freq[v[i]] == 0){
            b[i] = v[i];
        }else{
            while(!unused.empty() && freq[unused.front()] > 0){
                unused.pop();
            }
            b[i] = unused.front();
            unused.pop();
        }
        freq[b[i]]++;
    }

    for (auto &it : b){
        cout << it << " ";
    }
    cout << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    tc {
        solve();
    }

    return 0;
}
