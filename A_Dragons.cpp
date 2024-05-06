// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

int32_t main(){
    int s, n;
    cin >> s >> n;

    pair<int, int> p[n * 2];

    for(int i = 0; i < n; i++){
        cin >> p[i].first >> p[i].second;
    }

    bool loss = false;

    sort(p, p+n);

    for(int i = 0; i < n; i++){
        if(s > p[i].first){
            s += p[i].second;
        }else{
            loss = true;
            break;
        }
    }

    if(loss) puts("NO");
    else puts("YES");

    return 0;
}
