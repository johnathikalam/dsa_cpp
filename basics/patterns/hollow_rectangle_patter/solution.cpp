#include <iostream>
using namespace std;

void pattern(int n){
    for (int i = 0; i < n; i++){
        if (i == 0 || i == n-1){
            for (int j = 0; j < n; j++){
                cout<< "*";
            }
            cout<< "\n";
        }else{
            cout<< "*";
            for (int j = 1; j < n-1; j++){
                cout<< " ";
            }
            cout<< "*\n";
        }
    }
}

int main(){
    pattern(6);
    return 0;
}