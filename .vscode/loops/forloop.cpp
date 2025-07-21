#include<iostream>
using namespace std;
int main()
{
    int n;
    int  sum =0;
    cout << "enter  number: ";
    cin >>n;
    int i =1;
    while(i<=n){
         if(i%2 != 0){
         sum += i;
        }
         i++;
    }
    cout << "sum of odd is " << sum << endl;

    return 0;
}