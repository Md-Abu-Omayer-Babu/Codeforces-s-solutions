// Problem link : https://codeforces.com/problemset/problem/1490/C

// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"
 
#include <bits/stdc++.h>
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

        int a = cbrt(n);
        bool flag = false;
        for(int i = 1; i <= a; i++){
            int b = cbrt(n - i*i*i);
            if(b*b*b + i*i*i == n && b >= 1){
                flag = true;
                break;
            }
        }

        if(flag) yes;
        else no;
    }

    return 0;
}
