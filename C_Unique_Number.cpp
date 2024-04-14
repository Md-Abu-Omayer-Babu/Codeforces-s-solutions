// Problem link : https://codeforces.com/problemset/problem/1462/C

// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t;cin >> t;while(t--)

int digit_sum(int n){
    int sum = 0;
    while(n > 0){
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

int32_t main(){
    tc{
        int n;
        cin >> n;

        vector<int> v;

        int sum = 0;
        int last = 9;
        while(sum < n && last > 0){
            int mini = min(n - sum, last);
            v.push_back(mini);
            sum += last;
            last--;
        }

        if(sum < n){
            cout << -1 << endl;
        }else{
            reverse(v.begin(), v.end());
            for(auto &it : v){
                cout << it;
            }
            cout << endl;
        }

    }

    return 0;
}
