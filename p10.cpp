#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++)
    {
        int ch='A';
        for(j=1;j<=n;j++)
        {
            cout<<(char)ch;
            ch++;
        }cout<<endl;
    }
}