#include <iostream>
using namespace std;

bool isPalindrome(int n){
    int rev = 0;
    int duplicate = n;

    while (n > 0){
        rev = (rev * 10) + (n % 10);
        n /= 10;
    }
    return (duplicate == rev);
}

int main(){
    int n = 123454321;
    bool res = isPalindrome(n);
    if (res){
        cout<<"Palindrome Number";
    }else {
        cout<< "Not Palindrome";
    }
}