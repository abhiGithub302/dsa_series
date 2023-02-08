#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j;
    /*
    while(i<=n)
    {
        int j=1;
        while(j<=n){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    */
   for(i=1;i<=n;i++)
   {
    for(j=1;j<=n;j++)
    {
        cout<<"*";
        
    }
    cout<<endl;
   }
}