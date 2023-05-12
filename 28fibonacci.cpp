#include<iostream>
using namespace std;
int main()
{
    int i;
    int a=0;
    int b=1;
    int n=10;
    cout<<a<<" "<<b<<" ";
    for(i=1;i<=n;i++)
    {
int NexNumber=a+b;
cout<<NexNumber<<" ";
a=b;
b=NexNumber;
    }
}