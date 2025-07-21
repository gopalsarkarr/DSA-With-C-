#include<iostream>
#include<vector>
using namespace std;
bool Isvalid(vector<int> &  arr , int n, int m, int maxval){
    int student =1, pages=0;
    for(int  i=0; i<n; i++){
        if(arr[i]>maxval){
            return false;
        }
        if(pages+arr[i]<= maxval){
            pages+= arr[i];
        }
        else{
             student ++;
             pages=arr[i];

        }
    }
}
int BookAllocation(vector<int> &arr, int n, int m){
    if(m>n){
        return -1;
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum +=arr[i];
    }
    int st =0, end=sum, ans = -1;
    while (st<=end)
    {
        int mid = st +(end -st)/2;
        if(Isvalid(arr, n, m, mid)){
            ans = mid;
            end = mid-1;
        }
        else
        st = mid+1;
    }
    return ans;
}
int main(){
    vector<int> arr ={2, 1, 3, 4};
    int n=4, m=3;
    cout<<BookAllocation(arr, n, m)<<endl;
    return 0;
}