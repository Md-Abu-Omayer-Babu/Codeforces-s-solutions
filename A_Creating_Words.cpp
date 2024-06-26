#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t;cin >> t;while(t--)

int32_t main() {
    tc{
        string s1, s2;
        cin >> s1 >> s2;

        swap(s1[0], s2[0]);

        cout << s1 << " " << s2 << endl;
    }
    
    return 0;
}
