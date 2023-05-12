#include<iostream>
using namespace std;
int Factorial( int n)
{
     int fact=1;
    for( int i=1;i<=n;i++)
     {
        fact=fact*i;
     }
return fact;
}
int nCr(int n, int r)
{
    int num=Factorial(n);
    int deno=(Factorial(r)*Factorial(n-r));
    return num/deno;
}
int main()
{
     int n,r;
     cout<<"Enter the value of n and r"<<endl;
    cin>>n>>r;
    cout<<"factorial of the number is"<<Factorial(n)<<endl;
    cout<<"nCr value:-"<<nCr(n,r);
    


}