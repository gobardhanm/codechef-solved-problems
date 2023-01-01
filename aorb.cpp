#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
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
    int x, y, m, n;
    cin >> x >> y;
    
	    
	    m=(500-(2*x))+(1000-(4*(x+y)));
	    
	    n=(500-(4*y))+(1000-(2*(x+y)));
	    
	    if(m>n)
	    {
	        cout<<"\n"<<m;
	    }
	    
	    else
	    {
	        cout<<"\n"<<n;
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
