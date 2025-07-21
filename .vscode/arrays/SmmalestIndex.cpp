#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout << "enter number for value:";
    cin >> n;
    int nums[n];
    for(int i=0; i<n; i++){
        cout << "enter value";
        cin >>nums[i];
    }
    int index;
    int smallest = INT_MAX;
    for(int i=0; i<n; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
            index = i;
        }
    }
    cout << "slomest value of index is: " << index << endl;
        return 0;
}