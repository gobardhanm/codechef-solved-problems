#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define forn for(int i= 0; i<n; ++i)
#define fornn for(int i=0; i<= n; ++i)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

void solve() {
     char  a[8][8];
     int i , j;
     for(int i=0;i<8;i++){
         for(int j=0;j<8;j++){
            cin>>a[i][j];
        }
        }

         for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
              if(a[i][j]=='#' && a[i-1][j-1]=='#' && a[i-1][j+1]=='#' && a[i+1][j-1]=='#' && a[i+1][j+1]=='#'){
                    cout << i+1 << " " << j+1 << nline;
                    break;
                }

            }

        }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++) {
        solve();
    }
    
    return 0;
}
