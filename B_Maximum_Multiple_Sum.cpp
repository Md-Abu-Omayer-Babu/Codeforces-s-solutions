#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t;cin >> t;while(t--)

int32_t main() {
    tc{
        int n;
        cin >> n;

        int max = 0;
        int best = 2;

        for(int i = 2; i <= n; i++){
            int k = n / i;
            int sum = i * k * (k + 1) / 2;

            if(sum > max){
                max = sum;
                best = i;
            }
        }


        cout << best << endl;


    }
    
    return 0;
}

