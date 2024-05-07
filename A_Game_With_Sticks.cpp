// Problem link : https://codeforces.com/problemset/problem/451/A

// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"

#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"

int32_t main(){
    int t = 1;
    // cin>>t;
    while(t--){
        int n,k;
        cin >> n >> k;

        if(min(n,k) % 2 == 0){
            cout << "Malvika" << endl;
        }else{
            cout << "Akshat" << endl;
        }
        
    }

    return 0;
}
