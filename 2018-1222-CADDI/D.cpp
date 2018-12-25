#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }

    bool winner = true;
    while(1){
        bool getflag = false;
        int maxi = 0;
        int index = 0;
        for(int i = 0; i < N; i++){
            if(a[i] % 2 == 1){
                a[i]--;
                getflag = true;
            }
            if(maxi < a[i]){
                maxi = a[i];
                index = i;
            }
        }

        if(!getflag) a[index]--;
        
        int total = 0;
        for(int i = 0; i < N; i++){
            total += a[i];
        }
        if(total == 0) break;

        winner = ~winner;
    }
    
    if(winner) cout << "first" << endl;
    else cout << "second" <<;
    return 0;
}