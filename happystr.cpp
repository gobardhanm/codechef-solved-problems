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
    string s;
    cin >> s;
    int n = 1000;
    int flag = 0;
    forn{
        if(s[i] == 'a' || s[i]== 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            if(s[i+1] == 'a'||s[i+1] == 'e'||s[i+1] == 'i'||s[i+1] == 'o'||s[i+1] == 'u'){
                if(s[i+2] == 'a' ||s[i+2] == 'e' ||s[i+2] == 'i' ||s[i+2] == 'o' ||s[i+2] == 'u' ){
                    flag += 1;
                }
            }
        }
    }
    if(flag) cout << "Happy" << nline;
    else cout << "Sad" <<nline;
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
