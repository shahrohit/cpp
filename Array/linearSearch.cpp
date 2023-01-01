#include <iostream>
using namespace std;
float linearSearch(float arr[], float key, int n);
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    float arr[n], key;
    cout << "Enter the numbers :: \n";
    for (float &elem : arr)
    {
        cin >> elem;
    }

    cout << "Enter the key : ";
    cin >> key;
    cout << linearSearch(arr, key, n);
    return 0;
}
float linearSearch(float arr[], float key, int n)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}