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
    int n, x , y;
    cin >> n >> x >> y;
    string s; cin >> s;
    int flagz = 0 , flago = 0 , i;
    for(i = 0 ; i < n ; ++i){
        if(s[i] == '0') flagz = 1;
        else flago = 1;
        if(flagz && flago){
            break;
        }
    }
    if(i == n){
        cout << '0' << nline;
    }else{
        cout << min(x,y) << nline;
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
