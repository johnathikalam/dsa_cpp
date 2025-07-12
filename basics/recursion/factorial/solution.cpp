#include <iostream>
using namespace std;

void factorial(int n, int fact){
    if (n == 0){
        cout<< fact;
        return;
    }
    factorial(n-1, fact*n);
    return;
}

int main(){
    int n = 5;
    factorial(n, 1);
    return 0;
}