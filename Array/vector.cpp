#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector decelaration
    //  vector<T> vector_name;
    vector<int> num;

    // vector initialization

    // vector<int> v={1,2,3,4,5}; or
    vector<int> v(5, 12); // 5 is the size and 12 is the value of every element

    // Adding elements
    num.push_back(4);
    num.push_back(3);
    num.push_back(5);

    // accesing the elements
    cout << "1st element : " << num.at(0) << endl;
    cout << "2nd element : " << num.at(1) << endl;
    cout << "3rd element : " << num.at(2) << endl;

    // changing elementss

    num.at(0) = 1;

    cout << num.at(0) << endl; // 1

    // deleting the elements
    num.pop_back(); // it will remove last elements

    // functions
    // size()
    cout << "Size : " << num.size() << endl; // 2

    // iterator
    vector<int> v2 = {5, 2, 3, 3, 2, 1, 8};
    vector<int>::iterator iter, iter2;

    // iter points to num[0]
    // iter = v2.begin();
    // cout << *iter;

    // iter2 = v2.end();
    // cout << *(iter2 - 1);

    // itrate through itreator
    for (iter = v2.begin(); iter != v2.end(); ++iter)
    {
        cout << *iter << " ";
    }

    return 0;
}