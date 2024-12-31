// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"
 
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define debug(var) cerr << #var" = " << var << endl
#define tc int t;cin >> t;while(t--)

void solve() {
    int n;
    cin >> n;

    vector<string> square(n);
    for(int i = 0; i < n; i++){
        cin >> square[i];
    }

    unordered_set<char> main_diag, anti_diag;
    unordered_set<char> diag, except_diag;

    for(int i = 0; i < n; i++){
        main_diag.insert(square[i][i]);
        anti_diag.insert(square[i][n - i - 1]);
        diag.insert(square[i][i]);
    }

    bool same_diagonal = false;
    if(main_diag.size() == 1 && anti_diag.size() == 1){
        if(main_diag == anti_diag){
            same_diagonal = true;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(!(i == j || j == n - i - 1)){
                except_diag.insert(square[i][j]);
            }
        }
    }

    bool same_others = false;
    if(except_diag.size() == 1){
        same_others = true;
    }

    bool diag_and_except_diag = false;
    if(diag == except_diag){
        diag_and_except_diag = true;
    }

    if(same_diagonal && same_others && !diag_and_except_diag){
        yes;
        return;
    }

    no;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);

    // tc{
        solve();
    // }

    return 0;
}