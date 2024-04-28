// Problem link : https://codeforces.com/problemset/problem/1931/C

// In the name of Almighty Allah
// This code is written by "Md Abu Omayer Babu"

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> heights(n);
        for(int i = 0; i < n; i++){
            cin >> heights[i];
        }

        int leftMatches = 1;

        for(int i = 0; i < n - 1; i++){
            if(heights[i] == heights[i+1]){
                leftMatches++;
            }else{
                break;
            }
        }

        for(int i = n - 1; i > 0; i--){
            if(heights[0] == heights[i]){
                leftMatches++;
            }else{
                break;
            }
        }

        int leftDiff = 0;

        if(n - leftMatches < 0){
            leftDiff = 0;
        }else{
            leftDiff = n - leftMatches;
        }

        reverse(heights.begin(), heights.end());

        int rightMatches = 1;

        for(int i = 0; i < n - 1; i++){
            if(heights[i] == heights[i+1]){
                rightMatches++;
            }else{
                break;
            }
        }

        for(int i = n - 1; i > 0; i--){
            if(heights[0] == heights[i]){
                rightMatches++;
            }else{
                break;
            }
        }
        
        int rightDiff = 0;

        if(n - rightMatches < 0){
            rightDiff = 0;
        }else{
            rightDiff = n - rightMatches;
        }

        cout << min(leftDiff, rightDiff) << endl;
        
    }

    return 0;
}
