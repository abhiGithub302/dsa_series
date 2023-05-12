#include <iostream>
using namespace std;
int isEven(int num)
{
    if (num % 2 == 0)
    {
        cout << "Number is even number";
    }
    else
    {
        cout << "Number is odd ";
    }
}
int main()
{
    int num;
    cin >> num;
    isEven(num);
}
