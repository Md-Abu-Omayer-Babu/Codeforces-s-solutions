// Problem link : https://codeforces.com/problemset/problem/1294/C

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
    ios_base::sync_with_stdio(0);
	cin.tie(0);

    tc{
        int n;
        cin >> n;

        int a, b, c;
        bool flag_1 = false;
        bool flag_2 = false;

        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                a = i;
                flag_1 = true;
                n /= i;
                break;
            }
        }

        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0 && i != a){
                b = i;
                flag_2 = true;
                n /= i;
                break;
            }
        }

        c = n;

        if(flag_1 && flag_2 && a != b && b != c && c != a){
            yes;
            cout << a << " " << b << " " << n << endl;
        }else{
            no;
        } 

    }

    return 0;
}
