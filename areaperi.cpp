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

//Problem: Area OR Perimeter

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l, b;
    cin >> l >> b;
    int p = 2 * (l + b);
    int a = l * b;
    if(p > a){
        cout << "Peri" << nline;
        cout << p << nline;
    }else if(p < a){
        cout << "Area" << nline;
        cout << a << nline;
    }else{
        cout << "Eq" << nline;
        cout << a << nline;
    }
}
