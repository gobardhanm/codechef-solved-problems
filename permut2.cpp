//Gobardhan Meher

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define fori for(int i= 0; i<n; ++i)
#define forj for(int j=0; j< n; ++j)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

//Problem: Ambiguous Permutation

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while(true){
        int n;
        cin >> n;
        if(n == 0){
            break;
        }
        int a[n], b[n];
        bool am = 1;
        for(int i= 0; i < n; i++){
            cin >> a[i];
            b[a[i]-1] = i + 1;
        }
        for(int i= 0 ; i <n; ++i){
            if(a[i] != b[i]){
                am = 0;
                break;
            }
        }
        (am) ? cout << "ambiguous" << nline : cout << "not ambiguous" << nline;
    }
}
