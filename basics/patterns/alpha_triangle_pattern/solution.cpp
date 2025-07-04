#include <iostream>
using namespace std;

void pattern(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout<< char('A' + n-i+j-1)<< " ";
        }
        cout << "\n";
    }
}

int main(){
    pattern(6);
    return 0;
}