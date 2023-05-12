#include <iostream>
using namespace std;
void Counting(int n)
{
    for (int i = 0; i <= n; i++)
    {
        cout << i << " ,";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    Counting(n);
    return 0;
}