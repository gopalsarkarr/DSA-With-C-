#include<iostream>
#include<climits>
using namespace std;
int lenear(int arr[], int sz, int target){
    for(int i=0; i<sz; i++){
        if(arr[i]== target){
            return i;
        }
    }
    return -1;

}
int main(){
    int arr[]={7, 5, 6, 9, 1, 2, 3};
    int sz=7;
    int target=99;

    cout << lenear(arr, sz, target) << endl;
    return 0;
}