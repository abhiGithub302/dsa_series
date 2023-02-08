#include <iostream>
using namespace std;
int main()
{
    int i, j, k, n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        for (j = 1; j < (i - 1) * 2; j++)
        {
            cout << " * ";
        }
        for (j = n - i +  1; j >= 1; j--)
        {
            cout << j<<" ";
        }
        cout << endl;
    }
}