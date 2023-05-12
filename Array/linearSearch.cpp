#include <iostream>
using namespace std;
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[] = {12, 3, 2, 1, 3, 40, -22, 3, -3};
    cout << "enter the number that we want to search";
    int key;
    cin >> key;
    bool found = search(arr, 10, key);
    if (found)
    {
        cout << "key is present";
    }
    else
    {
        cout << "key is absent";
    }
}
