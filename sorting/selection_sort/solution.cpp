#include <iostream>
using namespace std;

void selection_sort(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        int min = i;
        for (int j = i+1; j < n; j++){
            if (arr[min]> arr[j]) min = j;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main(){
    int arr[] = {3, 6, 7, 2, 1, 9, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, n);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}