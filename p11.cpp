#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j;
  char value='A';
    for(i=2;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
          cout<<value;
          value++;
        }
        cout<<endl;
    }
}