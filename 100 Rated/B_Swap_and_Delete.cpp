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
    string s;
    cin >> s;

    int cnt_0 = 0, cnt_1 = 0;
    for(int i = 0; i < s.size(); i++){
        s[i] == '1' ? cnt_1++ : cnt_0++; 
    }

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0'){
            if(cnt_1 > 0){
                cnt_1--;
            }
            else{
                break;
            } 
        }else{
            if(cnt_0 > 0){
                cnt_0--;
            }
            else{
                break;
            }
        }
    }

    cout << cnt_1 + cnt_0 << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    tc{
        solve();
    }

    return 0;
}
