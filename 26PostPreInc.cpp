#include <iostream>
using namespace std;
int main(){
    int a=12;
    int b=14;
    cout<<"a&b"<<(a&b)<<endl;
    cout<<"a&b"<<(a|b)<<endl;
    cout<<"a&b"<<(a^b)<<endl;
    cout<<"a&b"<<~a<<endl;
    int i=18;
    cout<<(++i)<<endl;//19
    cout<<(i--)<<endl;//19
    cout<<(i++)<<endl;//18
    cout<<(--i)<<endl;//18
}