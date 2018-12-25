// by neko_kichi
#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
#include<algorithm>
using namespace std;
typedef long long ll;

ll cnt = 0;

bool is_prime(ll n){
    if (n == 1) return false;
    for (ll i = 2; i * i <= n; i++){
        if (n % i == 0 ) return false;
    }
    return true;
}

pair<vector<ll>, vector<ll> > prime_factor_decomp(ll n){
    ll m = n;
    vector<ll> p, e;
    for (ll i = 2; i * i <= n; i++){
        if (m % i != 0) continue;
        int c = 0;
        while (m % i == 0) c++, m /= i;
        p.push_back(i); // 素数が列挙されてる
        e.push_back(c); // 素数の指数部が列挙されている
        cnt++;          // 素因数分解の総数をカウントしている
    }

    if (m > 1){
        p.push_back(m);
        e.push_back(1);
        cnt++;
    }

    return make_pair(p, e);
}

int main(){
    ll N, P;
    cin >> N >> P;

    if (N == 1) cout << P << endl;
    else if (is_prime(P)) cout << 1 << endl;
    else{
        pair<vector<ll>, vector<ll> > v = prime_factor_decomp(P);
        ll ans = 1;
        for (ll i = 0; i < cnt; i++){
            if (v.second[i] >= N){
                ll k = v.second[i] / N, p = 1;
                for (ll j = 0; j < k; j++) p *= v.first[i];
                ans *= p;
            }
        }

        cout << ans << endl;
    }

    return 0;
}