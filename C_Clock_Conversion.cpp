// Problem link : https://codeforces.com/contest/1950/problem/C

// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"
 
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define tc int t;cin >> t;while(t--)
 
int32_t main(){

    ios_base::sync_with_stdio(0);
	cin.tie(0);
    tc{
        int hour, minute;
        char colon;
        string AM_PM;

        cin >> hour >> colon >> minute;

        if (hour >= 12) {
            AM_PM = "PM";
            if (hour > 12) {
                hour -= 12;
            }
        } else {
            AM_PM = "AM";
            if (hour == 0) {
                hour = 12;
            }
        }

        printf("%02d:%02d %s\n", hour, minute, AM_PM.c_str());
    }

    return 0;

}