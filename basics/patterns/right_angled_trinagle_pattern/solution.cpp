#include <iostream>
#include <string>
using namespace std;

void pattern(int n ){
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout<< "* ";
        }
        cout << endl;
    }
}

int main(){
    pattern(6);
    return 0;
}