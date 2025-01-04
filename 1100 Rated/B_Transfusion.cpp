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

void solve(){
    int n;
    cin >> n;

    int odd_sum = 0, even_sum = 0;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(i & 1){
            odd_sum += v[i];
        }else{
            even_sum += v[i];
        }
    }

    int odd_elem = n / 2;
    int even_elem = n / 2;

    if(n & 1){
        even_elem++;
    }

    int avg_odd = odd_sum / odd_elem;
    int avg_even = even_sum / even_elem;

    if(odd_sum % odd_elem != 0 || even_sum % even_elem != 0 || avg_odd != avg_even){
        no;
        return;
    }

    yes;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);

    tc{
        solve();
    }

    return 0;
}