#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number";
    cin>>num;
    switch(num){
        case 1: cout<<"This is first bit";
        break;
        case 2:
        cout<<"This is second bit";
        break;
        case 3:
        cout<<"this is third bit";
        break;
        default:
        cout<<"this is default case";

    }
}