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

//Problem: Smallest Numbers of Notes.

void solve() {
    int n; cin >> n;
    int ct =0 , nt[] = {100,50,10,5,2,1};
    for(int i= 0; i< 6; ++i){
        ct += n / nt[i];
        n = n % nt[i];
    }

    cout << ct << nline;
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
