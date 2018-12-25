#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
typedef long long ll;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    for (int i = 0; i < n; i++){
        cin >> h[i];
    }

    sort(h.begin(), h.end());

    int ans = 2e9;
    for (int i = 0; i < n - k + 1; i++){
        int sub = h[i + k - 1] - h[i];
        if (sub < ans) ans = sub;
    }
    cout << ans << endl;
    return 0;
}