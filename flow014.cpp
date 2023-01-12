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

//Problem: Grade The Steel

void solve() {
    double a[3];
    for(int i = 0; i< 3; ++i){
        cin >> a[i];
    }
    double f=0, s=0, t=0;
    if(a[0] >  50) f=1;
    if(a[1] <  0.7) s = 1;
    if(a[2] >  5600) t= 1;

    if(f && s && t) cout << 10 << nline;
    else if(f && s) cout << 9 << nline;
    else if( s && t ) cout << 8 << nline;
    else if(f && t) cout << 7 << nline;
    else if(f || s || t) cout << 6 << nline;
    else cout << 5 << nline;

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
