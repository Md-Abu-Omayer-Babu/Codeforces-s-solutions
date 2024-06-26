#include <bits/stdc++.h>
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
        int n, m;
        cin >> n >> m;

        int arr[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> arr[i][j];
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int elem = 0;
                int flag = 1;

                if(i - 1 >= 0){
                    elem = max(elem, arr[i - 1][j]);
                }
                if(j - 1 >= 0){
                    elem = max(elem, arr[i][j - 1]);
                }
                if(i + 1 < n){
                    elem = max(elem, arr[i + 1][j]);
                }
                if(j + 1 < m){
                    elem = max(elem, arr[i][j + 1]);
                }


                if((i - 1 >= 0 && arr[i][j] <= arr[i - 1][j]) || (j - 1 >= 0 && arr[i][j] <= arr[i][j - 1]) || (i + 1 < n && arr[i][j] <= arr[i + 1][j]) || (j + 1 < m && arr[i][j] <= arr[i][j + 1])){
                    flag = 0;
                }

                if(flag == 1){
                    arr[i][j] = elem;
                }

            }
        }


        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}
