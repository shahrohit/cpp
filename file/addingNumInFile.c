#include <stdio.h>

int main()
{
    FILE *fs = fopen("myFile.txt", "w");
    int a;
    for (int i = 1; i <= 100; i++)
    {
        // scanf("%d", &a);

        fprintf(fs, "%d\n", i);
    }

    fclose(fs);

    return 0;
}