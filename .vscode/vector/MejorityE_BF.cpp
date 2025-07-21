#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int majorityElement(vector<int> nums) {
        int n = nums.size();
        for(int val: nums){
            int freq=0;
            for(int el: nums){
                if(el == val){
                    freq++;
                }
            }
            if(freq > n/2){
                return val;
            }
        }
        
    }
int main()
{
    vector<int> nums = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, };
    int f= majorityElement(nums);
    cout << "mejority element is: " << f <<endl;
    return 0;
}