//Gobardhan Meher

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

//Problem: Mileage matters

void solve() {
     float n,x,y,a,b,d,p;
	    cin>>n>>x>>y>>a>>b;
	    p=(n/a)*x;
	    d=(n/b)*y;
	    if(p<d)
	    {
	        cout<<"PETROL"<<endl;
	    }
	    if(d<p)
	    {
	        cout<<"DIESEL"<<endl;
	    }
	    if(p==d)
	    {
	        cout<<"ANY"<<endl;
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
