#include<iostream>
#include<vector>
using namespace std;
int Binary(vector<int>arr, int tar, int st, int end){
    //  int st=0, end=arr.size()-1;
    if(st<=end){
        int mid= st + (end-st)/2;
        if(tar > arr[mid]){
            return Binary(arr, tar, mid+1, end );
        }
        else if(tar < arr[mid]){
            return Binary(arr, tar, st, mid-1);
        }
        else
        return mid+1; 
    }
    return -1;
}
int main(){
    vector<int> arr={-1, 5, 8, 9, 11, 15, 16, 18};
    int tar=19;
    cout<<"Binary Sc is: "<<Binary(arr, tar, 0, arr.size()-1)<<endl;
    return 0;
}