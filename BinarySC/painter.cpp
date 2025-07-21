#include<iostream>
#include<vector>
#include<climits>
using namespace std;
bool isPossibleAns(vector<int> &arr, int n, int m, int maxall){                                    //o(n)
    int painters =1, time=0;

    for(int i=0; i<n; i++){
        if(time+arr[i] <= maxall)
        time += arr[i];
        else{
            painters++;
            time = arr[i];
        }
    }
    return painters <= m;

}
int minTimeToPaint(vector<int> & arr, int n, int m){
    int sum =0, maxval = INT_MIN;
    for(int i=0; i<n; i++){                                                               //o(n)
        sum += arr[i];
        maxval = max(maxval, arr[i]);
    }
    int st = maxval, end = sum, ans = -1;
    while(st<=end){                                                                   // log(sum)
        int mid = st + (end -st)/2;
        if(isPossibleAns(arr, n, m, mid)){                                           //left
            ans = mid;                                                              // overal time o(log(sum)*n)
            end =mid-1;
        }
        else                                                                    // right
        st = mid+1;

    }
    return ans;


}
int main(){
    vector<int> arr ={40, 30, 10, 20};
    int n=4, m=2;
    cout << minTimeToPaint(arr, n, m) << endl;
    return 0;
}
