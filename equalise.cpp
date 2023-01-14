//Gobardhan Meher

#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define nline "\n"
#define fori for(int i= 0; i<n; ++i)
#define forj for(int j = 0; j< n; ++j)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

//Problem: Make A and B equal

void solve() {
    int a, b;
    cin >> a >> b;
    for(int i = 0; i < 26; i++){
        if(a == b){
            cout << "YES" << nline;
            break;
        }else if(a < b && a < 26){
            a *= 2;
        }else if(b < a && b < 26){
            b *= 2;
        }else{
            cout << "NO" << nline;
            break;
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

