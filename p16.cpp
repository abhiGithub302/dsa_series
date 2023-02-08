#include<iostream>
using namespace std;
int main()
{
    int i,j,n,ch;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        ch='A'+n-i;
        for(j=1;j<=i;j++)
        {
            cout<<(char)ch;
            ch++;

        }cout<<endl;
    }
}