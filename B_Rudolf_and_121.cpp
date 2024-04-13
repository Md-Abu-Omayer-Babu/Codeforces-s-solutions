// Problem link : https://codeforces.com/problemset/problem/1941/B

// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t;cin >> t;while(t--)

int32_t main(){

    ios_base::sync_with_stdio(0);
	cin.tie(0);

    tc{
        int n;
        cin >> n;

        vector<int> v(n);
        for(auto &it : v){
            cin >> it;
        }

        bool flag = true;
        for(int i = 0; i < n - 2; i++){
            if(v[i] < 0){
                flag = false;
                break;
            }
            v[i + 1] -= 2 * v[i];
            v[i + 2] -= v[i];
            v[i] = 0;
        }
        if(!flag){
            no;
        }else{
            for(int i = 0; i < n; i++){
                if(v[i] != 0){
                    flag = false;
                }
            }

            if(!flag) no;
            else yes;

        }  

    }

    return 0;
}
