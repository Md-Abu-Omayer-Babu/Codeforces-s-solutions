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
    
    int v[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> v[i][j];
        }
    }

    int mini = INT_MAX;
    int cnt = 0;

    for (int col = 0; col < n; col++) {
        int i = 0, j = col;
        while (i < n && j < n) {
            mini = min(v[i][j], mini);
            i++;
            j++;
        }
        if(mini < 0){
            cnt += abs(mini);
        }
        mini = INT_MAX;
    }

    for (int row = 1; row < n; row++) {
        int i = row, j = 0;
        while (i < n && j < n) {
            mini = min(v[i][j], mini);
            i++;
            j++;
        }
        if(mini < 0){
            cnt += abs(mini);
        }
        mini = INT_MAX;
    }

    cout << cnt << endl;

}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    tc{
        solve();
    }

    return 0;
}
