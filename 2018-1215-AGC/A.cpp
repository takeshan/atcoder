#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin >> str;

    int count = 0;
    int end = 100000000;
    bool startflag = false;
    for(int i = str.size(); i >= 0; i--){
        if(!startflag){
            if(str[i] == 'W'){
                end = i;
                startflag = true;
                continue;
            }
        }
        else{
            if(str[i] == 'B'){
                count += end - i;
                end--;
            }
        }
    }  

    cout << count << endl;
    return 0;

}