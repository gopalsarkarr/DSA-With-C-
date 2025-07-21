#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int majorityElement(vector<int> nums){
    int freq=0, ans=0;
    for(int i=0; i<nums.size(); i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i])
        freq ++;
        else
        freq--;
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