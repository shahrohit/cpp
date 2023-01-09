#include <stdio.h>

struct patient
{
    char name[50];
    char disease[50];
    int age;
    int bedNum;
} s;

int main()
{
    FILE *fs = fopen("patient.txt", "w");
    printf("Enter patient Name : ");
    gets(s.name);
    printf("Enter patient Disease : ");
    gets(s.disease);
    printf("Enter patient Age : ");
    scanf("%d", &s.age);
    printf("Enter patient Bed number : ");
    scanf("%d", &s.bedNum);

    fprintf(fs, "Name : %s\nDisease : %s\nAge : %d\nBed Number : %d\n", s.name, s.disease, s.age, s.bedNum);

    fclose(fs);

    return 0;
}