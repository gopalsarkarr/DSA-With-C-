#include<iostream>
using namespace std;
int n;
int factorial(int n){
    int fact=1;
      for(int i=1; i<=n; i++){
        fact = fact*i;

      }
      return fact;
}
int main()
{
    cout << "enter number for fact: ";
    cin >>n;
    cout << "fact number is: " << factorial(n) << endl;
    cout << "fact number is: " << factorial(5) << endl;
    return 0;
}