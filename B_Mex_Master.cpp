// Problem Link : https://codeforces.com/problemset/problem/1806/B

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
    
    ios_base::sync_with_stdio(0);
	cin.tie(0);
    
    tc{
        int n;
		cin >> n;

		int zero = 0;
		bool flag = false;

        vector<int> v(n);

        for(auto &it : v){
            cin >> it;
            if(it == 0){
                zero++;
            }else if(it >= 2){
                flag = true;
            }
        }

		if(zero <= (n + 1) / 2){
			cout << 0 << endl;
		}else if(flag || zero == n){
			cout << 1 << endl;
		}else{
			cout << 2 << endl;
		}
    }

    return 0;

}