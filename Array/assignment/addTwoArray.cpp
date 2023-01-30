#include <iostream>
#include <vector>
using namespace std;
vector<int> add(vector<int> &arr1, vector<int> &arr2)
{

    int num1 = 0, num2 = 0;
    vector<int> result;
    for (int i = 0; i < arr1.size(); i++)
        num1 = num1 * 10 + arr1[i];

    for (int i = 0; i < arr2.size(); i++)
        num2 = num2 * 10 + arr2[i];

    int num = num1 + num2;
    while (num != 0)
    {
        int rem = num % 10;
        result.insert(result.begin(), rem);
        num /= 10;
    }
    return result;
}
vector<int> add2(vector<int> &arr1, vector<int> &arr2)
{
    int i = arr1.size() - 1, j = arr2.size() - 1;

    int carry = 0;
    vector<int> result;

    while (i >= 0 and j >= 0)
    {
        int val1 = arr1[i--];
        int val2 = arr2[j--];
        int sum = val1 + val2 + carry;

        carry = sum / 10;
        sum = sum % 10;
        result.insert(result.begin(), sum);
    }

    while (i >= 0)
    {
        int sum = arr1[i--] + carry;
        carry = sum / 10;
        sum = sum % 10;
        result.insert(result.begin(), sum);
    }
    while (j >= 0)
    {
        int sum = arr2[j--] + carry;
        carry = sum / 10;
        sum = sum % 10;
        result.insert(result.begin(), sum);
    }

    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        result.insert(result.begin(), sum);
    }

    return result;
}
int main()
{
    vector<int> arr1{1, 2, 3, 4};
    vector<int> arr2{6};

    vector<int> ans = add2(arr1, arr2);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}