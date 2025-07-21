#include<iostream>
#include<vector>
using namespace std;

int BinarySC(vector<int> arr, int tar){
    int st=0, end=arr.size()-1;
    while (st<=end)
    {
        int mid = (st+end)/2;
        if(tar > arr[mid]){
            st= mid+1;
        }
        else if(tar < arr[mid]){
            end = mid-1;
        }
        else
        return mid+1;
    }
    return -999;

}
int main()
{
    vector<int> arr={-1, 2, 3, 5, 8, 11, 15, 17, 19};
    int tar=6;
    cout<<"Binary sc is: "<<BinarySC(arr, tar) << endl;
    return 0;
}