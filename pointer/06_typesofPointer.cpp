/*
    Types of pointer
    -> Null pointer
    -> wild pointer
    ->mDangling pointer
    -> void pointer


*/
#include <iostream>
using namespace std;
int main()
{
    // wild pointer -> whiich is only decleared and not defined which store randomm address and  the value in that address i also random
    int x;
    int *ptr;
    // cout << ptr<<" "<<*ptr;

    // Null pointer -> assign 0 in the address and if we try to access tghe value then we will get run time error( segmentatioon error)
    int *ptr1 = NULL;
    int *ptr2 = 0;
    int *ptr3 = '\0';
    // cout << ptr1 << " " << ptr2 << " " << ptr3;

    // dangling pointer

    int *ptr4 = NULL;
    {
        int x = 7;
        ptr4 = &x;
        // cout << ptr4 << " " << *ptr4;
    }

    // cout << ptr4 << " " << *ptr4;

    // void pointer -> special pointer that can point any data types
    float f = 2.7;
    int a = 4;
    void *p = &f;
    p = &a;
    cout << p << endl;
    // we can't directly dereference the void pointer
    // cout << *p; -> gives errro
    int *newpointer = (int *)p;
    cout << *newpointer;

    return 0;
}