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
    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    string sn;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]!='.')
	        {
	            sn+=s[i];
	        }
	    }
	    bool ans = true;
	    if(sn.length() %2!=0){
	      ans = false;
	    }
	     else{
	         for(int i=0; i<sn.length(); i++)
	         {
	            if(i%2==0)
	            {
	                if(sn[i]=='T')
	                  ans=false;
	            }
	            else
	            {
	                if(sn[i]=='H')
	                 ans=false;
	            }
	         }
	     }
	     if(ans)
	       cout<<"Valid"<< nline;
         else
             cout << "Invalid" << nline;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++) {
        solve();
    }
    
    return 0;
}
