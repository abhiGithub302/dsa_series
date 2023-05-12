#include <iostream>
using namespace std;

int update(int arr[], int size)
{
    cout << " inside the function"<<endl;
    arr[0]=100;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    cout << "ggoing back to main";
}
int main()
{
    int arr[3] = {1, 2, 4};
    update(arr, 3);
    for (int i = 0; i < arr[i]; i++)
    {
        cout << arr[i];
    }
}