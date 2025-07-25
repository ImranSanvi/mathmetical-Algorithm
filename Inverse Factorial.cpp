#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
#define PB push_back

#define mx_int_prime 999999937
const long long M = 1e9+7;
const int N = 2e6+5;
const int D = 998244353;

ll fact[N];
void factorial(){

    fact[0] = 1;
    for(int i=1; i<=N; i++){
        fact[i] = (fact[i-1]*i) % M;
    }
}

ll modExp(ll x, ll y, ll mod) {
    ll res = 1;
    x = x % mod; // Ensure x < mod
    while (y > 0) {
        if (y % 2 == 1) {
            res = (res * x) % mod;
        }
        x = (x * x) % mod;
        y /= 2;
    }
    return res;
}

ll invFact[N];
void inverseFactorial(){
    invFact[N] = modExp(fact[N], M - 2, M);
    for (int i=N-1; i>=0; i--) {
        invFact[i] = (invFact[i + 1] * (i + 1)) % M;
    }
}

void solve(){
    ll n , m;
    cin >> n >> m;
    ll ans = 2;

    for(int i=1; i<n+m; i++){
        ans = (ans * 2) %D;
    }
    cout << ans << endl;

}

int main(){

    optimize()

    // int tc;
    // cin >> tc;
    factorial();
    inverseFactorial();
    solve();
    // while(tc--){
    //     solve();
    // }

    return 0;
}
