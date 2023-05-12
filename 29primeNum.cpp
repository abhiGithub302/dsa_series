#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "enter the value of n";
    cin >> n;
    bool isPrime = 1;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            //cout << "Not a prime number";
            isPrime=0;
            break;
        }}
        if (isPrime == 0)
        {
            cout << "Not a prime Number" << endl;
        }
        else
        {
            cout << "is a prime number" << endl;
        }
    
}
