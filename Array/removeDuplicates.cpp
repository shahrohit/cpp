#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a[] = {4, 3, 2, 2, 4, 6, 7, 3};
    int n = sizeof(a) / sizeof(a[0]);
    vector<int> v(n, 0), final;

    for (int i = 0; i < n; i++)
    {
        v.at(a[i]) += 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (v.at(i) > 1)
            final.push_back(i);
    }
    for (int i = 0; i < final.size(); i++)
    {
        cout << final[i] << endl;
    }

    return 0;
}