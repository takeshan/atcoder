#include<iostream>
#include<string>
using namespace std;

int main(){
    string S;
    cin >> S;
    int counter = 0;
    for (int i = 0; i < S.size(); i++){
        if(S[i] == '2') counter++;
    }
    
    cout << counter << endl;
    return 0;
}