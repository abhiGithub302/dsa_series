#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j;
    

    for(i=1;i<=n;i++)
    {            char ch='A'+i-1;
        for(j=1;j<=n;j++)
        {
            cout<<ch;
            ch++;
        }cout<<endl;

    }
}