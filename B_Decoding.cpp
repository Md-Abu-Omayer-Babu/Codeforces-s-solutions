// Problem link : https://codeforces.com/problemset/problem/746/B

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
    
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<char> str(n);

    int mid = n / 2;
    int l = mid - 1;
    int r = mid;

    str[mid] = s[0];

    // odd
    for(int i = 1; i < n; i += 2){
        if(l >= 0){
            str[l] = s[i];
            l--;
        }
    }

    // even
    for(int i = 2; i < n; i += 2){
        if(r < n){
            r++;
            str[r] = s[i];
        }
    }

    if(n % 2 == 0){
        reverse(str.begin(),str.end());
    }

    for(auto &i : str){
        cout << i;
    }

    return 0;
}
