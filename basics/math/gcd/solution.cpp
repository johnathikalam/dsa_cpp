#include <iostream>
using namespace std;

int gcd(int n1, int n2){
    int min = n1 < n2 ? n1 : n2;
    int gcd_num = 1;
    int i = 2;
    while (i <= min){
        if(n1 % i == 0 && n2 % i == 0){
            gcd_num = i;
        }
        i++;
    }
    return gcd_num;
}

int main(){
    int n1 = 20, n2 = 15;
    int res = gcd(n1, n2);
    cout << res;
    return 0;
}