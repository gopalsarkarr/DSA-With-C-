#include<iostream>
#include<vector>
using namespace std;
int Search(vector<int> nums, int target){
    int st=0, end=nums.size()-1;

    while(st<=end){
        int mid = st+ (end-st)/2;
        if(nums[mid]==target){
            return mid+1;
        }
        if(nums[st] <= nums[mid]){ // left sorted
            if(nums[st] <= target && target <=nums[mid]){
                end = mid -1;
            }
            else{
                st = mid+1;
            }
        }
        else  {   // rihgt sorted
            if(nums[mid] <= target && target <= nums[end]){
                st=mid+1;
            }
            else {
                end = mid-1;
            }

        }   
    }
    return -1;
}

int main(){
    vector<int> arr={15, 16, 18, -1, 5, 8, 9, 11 };
    int tar=16;
    cout<<"Binary Sc is: "<<Search(arr, tar)<<endl;
    return 0;
}