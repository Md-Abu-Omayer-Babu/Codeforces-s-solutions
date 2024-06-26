#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    vector<string> results;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        string s;
        cin >> s;
        
        vector<int> ind(m);
        for (int i = 0; i < m; ++i) {
            cin >> ind[i];
        }
        
        string c;
        cin >> c;
        
        vector<char> update(n);
        for (int i = 0; i < m; ++i) {
            update[ind[i] - 1] = c[i];
        }
        
        sort(ind.begin(), ind.end());
        
        for (int i = 0; i < m; ++i) {
            s[ind[i] - 1] = update[ind[i] - 1];
        }
        
        results.push_back(s);
    }
    

    for (auto &result : results) {
        sort(result.begin(), result.end());
        cout << result << "\n";
    }
    
    return 0;
}
