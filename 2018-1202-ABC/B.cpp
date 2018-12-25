#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
typedef long long ll;

int main(){
    string s;
    cin >> s;

    int ans = 10000000;
    for (int i = 0; i < s.size() - 2; i++){
        int tmp = int(s[i] - '0') * 100 + int(s[i + 1] - '0') * 10 + int(s[i + 2] - '0');
        ans = min(ans, abs(753 - tmp));
    }

    cout << ans << endl;
    return 0;
}