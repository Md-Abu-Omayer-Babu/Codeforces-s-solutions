// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t;cin >> t;while(t--)


int position(int n) {
    if (n == 1 || (n & (n - 1)) == 0){
        return n;
    }
    
    int pos = 1;
    while (pos * 2 <= n) {
        pos *= 2;
    }
    return pos;
}

int32_t main(){
    tc{
        int n;
        cin >> n;
        cout << position(n) << endl;
    }

    return 0;
}