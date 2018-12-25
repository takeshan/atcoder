#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
typedef long long ll;

string str = "357";

int dfs(ll s, ll n){
    if (s > n) return 0;
    bool flag = true;
    string S = to_string(s);
    for (int i = 0; i < str.size(); i++){
        for (int j = 0; j < S.size(); j++){
            if (str[i] == S[j]){
                flag = true;
                break;
            }
            flag = false;
        }
        if (!flag) break;
    }
    int ans = (flag)? 1 : 0;
    
    ans += dfs(s*10 + 3, n);
    ans += dfs(s*10 + 5, n);
    ans += dfs(s*10 + 7, n);

    return ans;
}

int main(){
    int n;
    cin >> n;
    cout << dfs(0, n) << endl;

    return 0;
}