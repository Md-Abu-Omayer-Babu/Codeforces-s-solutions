// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"
 
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define debug(var) cerr << #var" = " << var << endl
#define tc int t;cin >> t;while(t--)

void solve() {
    string s;
    cin >> s;

    stack<char> stk;
    for(auto &it : s){
        if(it == '(' || it == '{' || it == '['){
            stk.push(it);
        }else if(it == ')' || it == '}' || it == ']'){
            if(stk.empty()){
                no;
                return;
            }

            char top = stk.top();
            
            if((it == ')' && top == '(') || (it == '}' && top == '{') || (it == ']' && top == '[')){
                stk.pop();
            }else{
                no;
                return;
            }
        }
    }

    if(stk.empty()){
        yes;
        return;
    }

    no;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0);

    // tc{
        solve();
    // }

    return 0;
}
