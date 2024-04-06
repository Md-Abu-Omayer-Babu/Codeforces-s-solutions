// https://codeforces.com/problemset/problem/1883/B

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
    tc{
        int n, k;
        cin >> n >> k;

        string str;
        cin >> str;

        map<char,int> mp;

        for(auto &it : str){
            mp[it]++;
        }

        int odd = 0;
        for(auto &it : mp){
            if(it.second % 2 != 0){
                odd++;
            }
        }

        if(odd > k + 1){
            no;
        }else{
            yes;
        }
        
    }

    return 0;
}
