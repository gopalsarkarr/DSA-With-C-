#include<iostream>
using namespace std;
void SelectionSort( int arr[], int n){
    for(int i=0; i<n-1; i++){
        int smallesIdx = i;
        for(int j =i+1; j<n; j++){
            if(arr[j]< arr[smallesIdx]){
                smallesIdx = j;
            }
        }
        swap(arr[i], arr[smallesIdx]);
    }
}
void printarr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int n=5;
    int arr[]={5, 4, 3, 2, 1};
    SelectionSort(arr, n);
    printarr(arr, n);

    return 0;
}