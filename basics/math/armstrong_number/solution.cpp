#include <iostream>
using namespace std;

bool isArmstrongNumber(int n){
    int num = 0;
    int duplicate = n;
    while (n > 0){
        int val = n % 10;
        num += (val * val * val);
        n /= 10;
    }
    return (num == duplicate);
}

int main(){
    int n = 153;
    bool res = isArmstrongNumber(n);
    if (res){
        cout<< "True";
    }else {
        cout<< "False";
    }
}