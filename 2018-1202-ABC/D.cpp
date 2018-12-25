#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
typedef long long ll;

int count(int n, vector<int> e){
    int cnt = 0;
    for (int i = 0; i < e.size(); i++){
        if (e[i] >= n - 1) cnt++;
    }
    return cnt++;
}

int main(){
    int n;
    cin >> n;
    vector<int> e(n+1, 0);

    // n! の 1, 2, ..., n それぞれに対して素因数分解をする
    // これらを合算することで n! の素因数分解とする
    // これにより n! の約数が列挙できた
    for (int i = 2; i <= n; i++){
        int tmp = i;
        for (int j = 2; j <= i; j++){
            while (tmp % j == 0){
                e[j]++;
                tmp /= j;
            }
        }
    }

    // 約数の数が 75 個になる七五数の数を数える
    // ある数 N の約数の個数は、N = 2^a * 3^b * ... * p^n、より
    // (a + 1) * (b + 1) * ... * (p + 1) 通りとなる
    // 指数部の組み合わせは、75 = 3 * 5 * 5より、
    // (3, 5, 5)、(15, 5)、(25, 3)、(75) の4通りある
    // n! の約数のうち上記の条件を満たすものを数え上げる
    int ans = count(75, e) + count(25, e) * (count(3, e) - 1) + count(15, e) * (count(5, e) - 1) + count(5, e) * (count(5, e) - 1) * (count(3, e) - 2) / 2;
    cout << ans << endl;

    return 0;
}