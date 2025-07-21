#include<iostream>
#include<vector>
using namespace std;
int SingleElement(vector<int> & arr){
    int st=0,end=arr.size()-1;

    if(arr.size()==1)
    return arr[0];
    while(st<=end){
        int mid= st+ (end-st)/2;



        if(mid==0 && arr[0] != arr[1])
        return arr[mid];
        if(mid==arr.size()-1 && arr[arr.size()-1] != arr[arr.size()-2])
        return arr[mid];



        if(arr[mid-1]!=arr[mid] && arr[mid]!=arr[mid+1]){
            return arr[mid];
        }


        
        if(mid%2 == 0){
            if(arr[mid-1]==arr[mid]){
                end = mid-1;
            }
            else
            st= mid+1;

        }
        else{
            if(arr[mid-1]==arr[mid]){
                st=mid+1;
            }
            else{
                end = mid-1;
            }
        }
    }

    return -1;
}

int main()
{
    vector<int> arr ={1,1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 7, 7, 8, 8};
    cout<<"single element is: "<<SingleElement(arr) <<endl;
    return 0;

}


int h(){


    cout << "-------";


}