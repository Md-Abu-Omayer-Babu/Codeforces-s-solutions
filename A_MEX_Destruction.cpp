// Problem link : https://codeforces.com/contest/2049/problem/A

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

    int zero = 0;

    vector<int> v(n);
    for(auto &it : v){
        cin >> it;
        if(it == 0){
            zero++;
        }
    }
    
    int mid_zero = 0;
    for(int i = 1; i < n - 1; i++){
        if(v[i] == 0){
            mid_zero++;
        }
    }

    if(zero == n){
        cout << 0 << endl;
        return;
    }

    if(zero == n - 1){
        cout << 1 << endl;
        return;
    }

    int not_zero_first_ocr = 0, not_zero_last_ocr = 0;

    for(int i = 0; i < n; i++){
        if(v[i] != 0){
            not_zero_first_ocr = i;
            break;
        }
    }

    for(int i = n - 1; i >= 0; i--){
        if(v[i] != 0){
            not_zero_last_ocr = i;
            break;
        }
    }

    int not_zeros_zero = 0;
    for(int i = not_zero_first_ocr; i <= not_zero_last_ocr; i++){
        // cerr << v[i] << " ";
        if(v[i] == 0){
            not_zeros_zero++;
        }
    }

    // cerr << not_zeros_zero << endl;

    if(not_zeros_zero){
        cout << 2 << endl;
        return;
    }else{
        cout << 1 << endl;
        return;
    }
    // cerr << not_zero_first_ocr << " " << not_zero_last_ocr << endl;

    if((v[0] == 0 || v[n - 1] == 0)){
        if(mid_zero == 0){
            cout << 1 << endl;
            return;
        }else{
            cout << 2 << endl;
            return;
        }
    }

    if(v[0] == 0 || v[n - 1] == 0 || (zero == 0)){
        cout << 1 << endl;
        return;
    }else{
        cout << 2 << endl;
        return;
    }

}

int32_t main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);

    tc{
        solve();
    }

    return 0;
}