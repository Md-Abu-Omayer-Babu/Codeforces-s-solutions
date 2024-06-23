// Problem link : https://codeforces.com/problemset/problem/577/A

// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t;cin >> t;while(t--)

int32_t main(){
    int n, x;
    cin >> n >> x;

    int count = 0;

    for(int i = 1; i <= n; i++){
        if(x % i == 0 && x <= i * n){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
