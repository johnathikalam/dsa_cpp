#include <iostream>
using namespace std;

void pattern(int n){
    int cnt = 1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout<< cnt <<" ";
            cnt += 1;
        }
        cout<< "\n";
    }
}

int main(){
    pattern(6);
    return 0;
}