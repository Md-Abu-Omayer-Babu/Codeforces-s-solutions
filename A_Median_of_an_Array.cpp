// Problem link : https://codeforces.com/contest/1946/problem/A

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
        double n;
        cin >> n;

        vector<int> v(n);
        for(auto &it : v){
            cin >> it;
        }

        sort(v.begin(),v.end());

        int operation = 0;
        int median_index = ceil(n / 2) - 1;
        int median = v[median_index];

        for(int i = median_index; i < n; i++){
            if(v[i] == median){
                operation++;
            }
        }

        cout << operation << endl;

    }

    return 0;

}