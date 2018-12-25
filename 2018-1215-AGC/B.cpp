#include<iostream>
#include<vector>
using namespace std;

bool is_beki(int sum){
    int a = 1;
    int count = 0;
    for(int i = 0; i < 31; i++){
        int f = a << i;
        int tmp = sum & f;
        if(tmp != 0) count++;
    }
    
    bool flag = count == 1? true: false;

    return flag;
}

int main(){
    int N;
    vector<int> A(N);
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    int count = 0;
    for(int i = 0; i < N-1; i++){
        for(int j = i+1; j < N; j++){
            int sum = A[i] + A[j];
            bool flag = is_beki(sum);
            cout << "A[i]: " << A[i] << " A[j]: " << A[j] << " sum: " << sum << " flag: " << flag << endl;
            if(flag) count++;
        }
    }

    cout << count << endl;

    return 0;
}