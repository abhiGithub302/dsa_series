#include<iostream>
using namespace std;
void prinarray(int arr[],int size)
{
    for (int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"printing done"<<endl;
}

int main()
{
int third[15]={3,2};
int n;
prinarray(third,13);
int fourth[10]={0};
int n1;
prinarray(fourth,10);
}