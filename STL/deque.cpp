#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_back(3);
    d.push_front(5); // pusing number to 1st index

    // d.pop_back();
    // d.pop_front();

    for (int i : d)
        cout
            << i << " ";
    return 0;
}