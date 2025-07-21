#include<iostream>
using namespace std;
int a;
int sum(int a){
    int s=0;
    for(int i=0; i<a; i++){
        s= s+i+1;
    }
    return s;
}
int main(){
    cout << "Enter number: ";
    cin >>a;
    cout << sum(a) << endl;
    cout << sum(6) << endl;
    return 0;
}