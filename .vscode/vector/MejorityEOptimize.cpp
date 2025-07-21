#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
int majorityElement(vector<int> nums){
    int n= nums.size();
    //sort
    sort(nums.begin(), nums.end());
    int freq =1, ans=nums[0];
    for(int i=1; i<n; i++){
        if(nums[i] == nums[i-1]){
            freq++;
        }
        else{
            freq=1;
            ans = nums[i];
        }
        if (freq> n/2){ 
            return ans;
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 9, 9, };
    int f= majorityElement(nums);
    cout << "mejority element is: " << f <<endl;
    return 0;
}