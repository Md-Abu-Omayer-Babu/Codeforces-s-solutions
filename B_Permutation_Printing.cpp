// Problem Link : https://codeforces.com/problemset/problem/1930/B

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
        int n;
        cin >> n;
        vector<int> v;
        
        int left = 1, right = n;
        for(int i = 1; i <= n; i++){
            if(i % 2 == 0){
                v.push_back(left);
                left++;
            }else{
                v.push_back(right);
                right--;
            }
        }

        for(auto &it : v){
            cout << it << " ";
        }
        cout << endl;
    }    

    return 0;

}