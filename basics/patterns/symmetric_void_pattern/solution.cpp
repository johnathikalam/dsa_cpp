#include <iostream>
using namespace std;

void pattern(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i; j++){
            cout<< "*";
        }
        for (int j = 0; j < 2*i; j++){
            cout<< " ";
        }
        for (int j = 0; j < n-i; j++){
            cout<< "*";
        }
        cout<< endl;
    }

    for (int i = 1; i <= n; i++){
        for (int j = 0; j < i; j++){
            cout<< "*";
        }
        for (int j = 0; j < 2*(n-i); j++){
            cout<< " ";
        }
        for (int j = 0; j < i; j++){
            cout<< "*";
        }
        cout<< endl;
    }
}
int main(){
    pattern(6);
    return 0;
}