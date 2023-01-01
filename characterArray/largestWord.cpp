#include <iostream>
using namespace std;
int main()
{
    char sentence[100] = "my name is rohit kumara shah";
    int i = 0, j = 0;
    int count = 0;
    int start = 0, end = 0;
    while (sentence[j] != '\0')
    {

        if (sentence[j] == ' ')
        {
            if (count > end - start)
            {
                start = i;
                end = j;
            }
            i = j + 1;
            count = 0;
        }
        else
        {
            count++;
        }
        j++;
    }
    // cout << end - start;
    for (int i = start; i < end; i++)
    {
        cout << sentence[i];
    }
    return 0;
}