#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    cout<<*p1 / *p2<<" "<<*p1 % *p2;
    return 0;
}