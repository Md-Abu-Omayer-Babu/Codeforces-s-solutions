#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t;cin >> t;while(t--)

int32_t main() {
    tc{
        int n, m;
        cin >> n >> m;

        vector<string> v(n);
        
        int min_row = n, max_row = -1;
        int min_col = m, max_col = -1;
        
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            for (int j = 0; j < m; ++j) {
                if (v[i][j] == '#') {
                    if (i < min_row) min_row = i;
                    if (i > max_row) max_row = i;
                    
                    if (j < min_col) min_col = j;
                    if (j > max_col) max_col = j;
                }
            }
        }

        int center_row = (min_row + max_row) / 2 + 1; 
        int center_col = (min_col + max_col) / 2 + 1; 

        cout << center_row << " " << center_col << endl;

    }
    
    return 0;
}

