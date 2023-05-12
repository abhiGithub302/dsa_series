#include<iostream>
using namespace std;
void dummy (int n)
{
    n++;
    cout<<"n is "<<n<<endl;

}
int main()
{
    int n;
    cin>>n;
    cout<<"number is"<<n<<endl;
    cout <<"number in dummy is" ;
    dummy(n);
    return 0;
}