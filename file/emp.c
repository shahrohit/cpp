#include <stdio.h>

struct employee
{
    int emp_id;
    char name[50];
    float salary;
};

int main()
{
    int n;
    printf("Enter the number of Employee : ");
    scanf("%d", &n);

    struct employee e[n];

    FILE *fs = fopen("employee.txt", "w");

    for (int i = 0; i < n; i++)
    {
        printf("*****Employee : %d*******\n", i + 1);
        printf("ID : ");
        scanf("%d", &e[i].emp_id);
        printf("Name : ");
        scanf("%s", e[i].name);

        printf("Salary : ");
        scanf("%f", &e[i].salary);

        fprintf(fs, "%d\t%s\t%.2f\n", e[i].emp_id, e[i].name, e[i].salary);
        printf("\n");
    }

    fclose(fs);

    FILE *ftr = fopen("employee.txt", "r");

    for (int i = 0; i < n; i++)
    {
        fread(&e, sizeof(struct employee), 1, ftr);
        printf("\n*****Employee : %d*******\n", i + 1);
        printf("ID : %d\n", e[i].emp_id);
        printf("Name : %s\n", e[i].name);
        printf("Salary : %.2f\n", e[i].salary);
    }

    fclose(ftr);
    return 0;
}