#include <iostream>
using namespace std;

void oneToN(int n){
    if (n <= 0) return;
    oneToN(n-1);
    cout<< n<< " ";
    return;
}

void nToOne(int n){
    if (n <= 0) return;
    cout<< n << " ";
    nToOne(n-1);
    return;
}

int main(){
    int n = 5;
    nToOne(n);
    cout<< endl;
    oneToN(n);
}