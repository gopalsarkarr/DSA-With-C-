#include<iostream>
using namespace std;
// int printhello(){
//     cout << "hello\n";
//     return 3;
//}
//sum oof two number
int sum(int a, int b){
    int  s= a+b;
    return s;
}
int min(int a, int b){ // Paramitar;
    if (a<b)
   { return a;}
    else 
    { return b; }
}

int main(){
 //   min(10,5)
    cout << "min number is: " << min(10,15) << endl; // argument 
/* jghb*/
    cout << sum(10,5) << endl;
//    int val = printhello();
//    cout << "value is: " << val <<endl;
//    cout << printhello() << endl;
    return 0;
}