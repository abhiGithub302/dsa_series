#include<iostream>
using namespace std;
int main(){
    int a,b;
    char opr;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    cout<<"Enter the operation +,-*,%,/ you want";
    cin>>opr;
    switch (opr)
    {
    case '+':
      cout<<"Addition is"<<(a+b)<<endl;
        break;
        case '-':
        cout<<"subtraction is"<<(a-b);
        break;
        case '*':
        cout<<"multiplication is"<<(a*b);
        break;
        case '/':
        cout<<"Division is"<<(a/b);  
        break;
        case '%':
        cout<<"modulo"<<(a%b);  
    
    }

}
