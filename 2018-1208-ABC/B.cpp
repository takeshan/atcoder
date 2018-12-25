#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int maxi = 0;
    int ans = 0;
    for (int i = 0; i < a.size(); i++){
        ans += a[i];
        if (maxi < a[i]) maxi = a[i];
    }

    ans -= int(maxi / 2);
    cout << ans << endl;

    return 0;
}