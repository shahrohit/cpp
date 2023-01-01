#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int> &v)
{
    int zero = 0;

    for (auto ele : v)
    {
        if (ele == 0)
            zero++;
    }
    for (int i = 0; i < v.size(); i++)
    {
        i < zero ? v[i] = 0 : v[i] = 1;
    }
    for (int i = zero; i < v.size(); i++)
    {
    }
}

void sort2(vector<int> &v)
{
    int left = 0, right = v.size() - 1;
    while (left < right)
    {
        if (v[left] == 1 && v[right] == 0)
        {
            v[left++] = 0;
            v[right--] = 1;
        }
        if (v[left] == 0)
            left++;
        if (v[right] == 1)
            right--;
    }
}
int main()
  
{
    vector<int> v{1, 1, 0, 0, 1, 0, 1, 1, 0};
    sort2(v);

    for (int ele : v)
    {
        cout << ele << "\t";
    }
    return 0;
}