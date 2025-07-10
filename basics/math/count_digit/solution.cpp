#include <iostream>
#include <cmath>
 
using namespace std;

int countDigitLog(int n){
    return (int) (log10(n)+1);
}

int countDigitWhile(int n){
    int cnt = 0;
    while (n > 0){
        cnt += 1;
        n/=10;
    }
    return cnt;
}

int main(){
    int n = 12345;
    int res = countDigitLog(n);
    cout<< res;
    return 0;
}