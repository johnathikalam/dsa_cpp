#include <iostream>
using namespace std;

void sumOfN(int n, int sum){
    if (n == 0){
        cout<< sum;
        return;
    }
    sumOfN(n-1, sum + n);
    return;
}

int main(){
    int n = 3;
    sumOfN(n, 0);
    return 0;
}