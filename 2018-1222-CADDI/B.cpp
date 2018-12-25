#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int N, H, W;
    cin >> N >> H >> W;

    vector<int> A(N);
    vector<int> B(N);

    int counter = 0;
    for (int i = 0; i < N; i++){
        cin >> A[i] >> B[i];
    }

    for(int i = 0; i < N; i++){
        if(H <= A[i] && W <= B[i]) counter++;
    }

    cout << counter << endl;
    return 0;
}