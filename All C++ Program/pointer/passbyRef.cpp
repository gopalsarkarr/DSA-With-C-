#include<iostream>
#include<vector>
using namespace std;
void change(int &ptr){
    ptr=20;
}


int main()
{
    int a=10;
    change(a);
    cout << "value is : " << a << endl;
    return 0;
}

