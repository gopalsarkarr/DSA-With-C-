#include<iostream>
#include<vector>
using namespace std;

int PeekIndex(vector<int> & arr){
    int st =1, end=arr.size()-2;
    while (st<=end)
    {
        int mid= st+ (end-st)/2;
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1])
        return mid;
        if(arr[mid-1]<arr[mid])
        st=mid+1;
        else
        end=mid-1;
    }

    return -1;
    
}

int main(){
    vector<int> arr={1, 5, 6, 7, 8, 7, 6, 4, 2};
    cout << "Peek Index  is: "<<PeekIndex(arr) << endl;
    return 0;
}