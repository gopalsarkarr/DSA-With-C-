#include<iostream>
using namespace std;
int reverse(int a){
    int b;
    int c=0;
    int rev=0;
    while(a>0){
        b=a%10;
        rev=rev*10+b;
        a=a/10;
        // cout << b << " ";
        c=c+b;
    }
    cout << c << endl;
  //  cout << endl;
    return rev;
}

int  main(){
    int a;
    cout << reverse(125);
    return 0;
             }


