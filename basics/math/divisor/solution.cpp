#include <iostream>
#include <cmath>
#include <set>

using namespace std;

set<int> divisor(int n){
    set <int> divisors;
    for (int i = 1; i < sqrt(n); i++){
        if (n % i == 0){
            divisors.insert(i);
            divisors.insert(n/i);
        }
    }
    if (n % (int) sqrt(n) == 0){
        divisors.insert(sqrt(n));
    }
    return divisors;
}

int main(){
    int n = 36;
    set<int> res =  divisor(n);
    for (auto it = res.begin(); it != res.end(); it++) {
    cout << * it << " ";
  }
    return 0;
}