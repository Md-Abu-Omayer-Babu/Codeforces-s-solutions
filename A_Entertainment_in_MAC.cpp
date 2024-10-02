// Problem link : https://codeforces.com/contest/1935/problem/A

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
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    
    tc{
        int n;
        cin >> n;
        string s;
        cin >> s;

        string str1 = s;
        string str3 = s + s;
        reverse(s.begin(), s.end());
        string str2 = s + str1;

        cout << min(str1, min(str2, str3)) << endl;
    }

    return 0;
}
