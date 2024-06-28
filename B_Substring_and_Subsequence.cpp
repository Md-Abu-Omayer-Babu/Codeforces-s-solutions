#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define tc int t;cin >> t;while(t--)

void solve(){
    string a, b;
    cin >> a >> b;

    int n = a.size();
    int m = b.size();

    int subsequence = 0;
    int ind = 0;

    for(int i = 0; i < n; i++){
        for(int j = ind; j < m; j++){
                // cerr << "j = " << j << " ";
            if(b[j] == a[i]){
                subsequence++;
                ind = j;
                // cerr << " ind = " << ind << endl;
                break;
            }
        }
    }

    cout << n + m - subsequence << endl;
    
}

int main(){
    tc{
        solve();
    }
    return 0;
}