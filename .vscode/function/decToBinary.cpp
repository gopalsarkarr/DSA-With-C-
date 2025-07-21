#include<iostream>
using namespace std;
int DesToBi(int a){
    int ans =0, pow=1;
    while (a >0)
    {
        int rem  = a%2;
        a = a/2;
        ans += (rem*pow);
        pow *= 10;
    }
    return ans;   
}
int main() {
    int decimal =50;
    cout << DesToBi(decimal) <<  endl;
    return 0;

}
