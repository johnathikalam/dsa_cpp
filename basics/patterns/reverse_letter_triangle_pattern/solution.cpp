#include <iostream>
using namespace std;

void pattern(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i; j++){
            cout<< char('A'+j) << " ";
        }
        cout << "\n";
    }
}
int main(){
    pattern(6);
    return 0;
}