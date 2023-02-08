#include <iostream>
using namespace std;
int main()
{
    int i, j, k, n;
    cin >> n;
    int ch = 1;
    for (i = 1; i <= n; i++)
    {
        for (k = 1; k < n - i; k++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout <<" "<< ch;
            ch++;
        }
        cout << endl;
    }
}