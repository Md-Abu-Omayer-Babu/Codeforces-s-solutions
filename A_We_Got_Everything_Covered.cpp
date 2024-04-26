// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"

#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        for(int i = 0 ; i < n ; i++){
            for(char j = 'a'; j < 'a' + k; j++){
                cout << j;
            }
        }
        cout << endl;

    }

    return 0;
}
