#include <iostream>
using namespace std;

void bubble_sort(int arr [], int n){
    bool flag = true;
    for (int i = n-1; i > 0; i--){
        for (int j = 0; j <= i-1; j++){
            if (arr[j] > arr[j+1]){
                flag = false;
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;                
            }
        }
        if (flag) break;
    }
}

 int main(){
    int arr[] = {3, 6, 7, 2, 1, 9, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, n);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}