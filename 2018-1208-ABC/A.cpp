#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
typedef long long ll;

int main(){
    int d;
    cin >> d;
    if (d == 25) cout << "Christmas" << endl;
    else if (d == 24) cout << "Christmas Eve" << endl;
    else if (d == 23) cout << "Christmas Eve Eve" << endl;
    else if (d == 22) cout << "Christmas Eve Eve Eve" << endl;
    return 0;
}