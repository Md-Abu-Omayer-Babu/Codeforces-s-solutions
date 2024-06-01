// Problem link : https://codeforces.com/contest/1976/problem/A

// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"
 
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t;cin >> t;while(t--)

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<char> digit1;
    vector<char> digit2;
    vector<char> letters1;
    vector<char> letters2;

    bool impossible = false;

    for(int i = 0; i < n; i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            impossible = true;
            break;
        }

        if(s[i] >= 'a' && s[i] <= 'z'){
            if(isdigit(s[i + 1])){
                impossible = true;
                break;
            }
        }
    }


    for(int i = 0; i < n; i++){
        if(isdigit(s[i])){
            digit1.push_back(s[i]);
            digit2.push_back(s[i]);
        }

        if(s[i] >= 'a' && s[i] <= 'z'){
            letters1.push_back(s[i]);
            letters2.push_back(s[i]);
        }
    }

    sort(digit1.begin(), digit1.end());
    sort(letters1.begin(), letters1.end());

    if(digit1 != digit2 || letters1 != letters2){
        impossible = true;
    }

    if(impossible){
        cout << "NO\n";
    }else{
        cout << "YES\n";
    }

}

int32_t main(){
    tc{
        solve();
    }
    return 0;
}
