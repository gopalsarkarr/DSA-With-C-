#include<iostream>
using namespace std;
int sumofdig(int num){
    int digsum =0;
    while(num>0){
        int lastdig  = num%10;
        num /= 10;
        digsum += lastdig;
    }
    return digsum;
}
int main()
{
    cout <<"sum = " << sumofdig(123450) << endl;

    return 0;
}