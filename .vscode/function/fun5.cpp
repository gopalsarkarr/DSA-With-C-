#include<iostream>
using namespace std;
int factorial(int a){
    int fact =1;
    for(int i=1; i<=a; i++){
        fact *= i; 
}
return fact;
}
int ncr(int a, int b)
{
    int fact_a = factorial(a);
    int fact_b = factorial(b);
    int c =a-b;
    int fact_a_b = factorial(c);
    return fact_a/(fact_b*fact_a_b);

}
int main()
{
    int n, r;
    cout << "enter your n: ";
    cin >>n;
    cout << "enter your r: ";
    cin >> r;
    cout << "your factoril is: " << ncr(n,r) << endl;
    return 0;
}