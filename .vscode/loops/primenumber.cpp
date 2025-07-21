#include<iostream>
using namespace std;
int main()
{
    int n=8;
    bool isprime = true;
    for(int i=2; i*i<= n; i++)
    {
        if(n%i == 0){
           // cout << "non prime";
           isprime = false;
            break;
        }
    }
        if (isprime == true)
        {
            cout << "prime" <<  endl;
        } else {
            cout << "non prime ";
        }
        return 0;
    }
