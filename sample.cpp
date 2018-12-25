#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
typedef long long ll;

bool is_prime(ll n){
    if (n == 1) return false;
    for (ll i = 2; i * i <= n; i++){
        if (n % i == 0 ) return false;
    }
    return true;
}

int main(){
    return 0;
}