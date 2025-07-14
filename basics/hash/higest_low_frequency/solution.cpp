#include <iostream>
#include <unordered_map>
using namespace std;

void frequencies(int arr[], int n){
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++){
        map[arr[i]] += 1; 
    }

    int minIndex = 0;
    int minCount = n;
    int maxIndex = 0;
    int maxCount = 0;
    for (auto x: map){
        if (x.second > maxCount){
            maxIndex = x.first;
            maxCount = x.second;
        }
        if (x.second < minCount){
            minIndex = x.first;
            minCount = x.second;
        }
    }
    cout << maxIndex << " " << maxCount << endl;
    cout << minIndex << " " << minCount << endl;
}

int main(){
    int arr [] = {10,5,10,15,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    frequencies(arr, n);
    return 0;
}