#include<iostream>
#include<climits>
using namespace std;
void reversearr(int arr[], int sz){
    int st=0;
    int end=sz-1;
    while (st < end)
    {
        swap(arr[st], arr[end]);
        st ++;
        end --;
    }
    


}
int main(){
    int arr[]={1, 2, 3, 4, 5, 6};
    int sz =6;
    reversearr(arr, sz);
    for(int i=0; i<sz; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
    return 0;

}

