#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    vector<char> vec;
    vec.push_back(25);
    // for(char val : vec){
    //     cout << val <<  endl;

    // }
    vec.pop_back();
    cout << "size=" <<vec.size() << endl;
    return 0;
}