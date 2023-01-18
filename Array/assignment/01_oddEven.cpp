#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 2}, n = 5;
    int odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        arr[i] % 2 == 0 ? even++ : odd++;
    }
    cout << "Odd : " << odd << endl;
    cout << "Even : " << even << endl;
}
