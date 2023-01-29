#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{1, 2, 5, 6, 8, 10, 17};

    cout << binary_search(v.begin(), v.end(), 5);

    return 0;
}