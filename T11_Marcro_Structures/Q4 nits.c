#include <stdio.h>

#define max_len 11

#pragma pack(1)

struct student_t
{
    char name[max_len];
    int roll;
    char sex;
    double gpa;
};

void printstu(struct student_t *p_student)
{
     printf("%s %d %c %lg\n", p_student->name, p_student->roll, p_student->sex, p_student->gpa);
}

int main()
{
    struct student_t s1={0};

    printf("%d %d %d %d %d\n", sizeof(struct student_t),  &(s1.name), &(s1.roll), &(s1.sex), &(s1.gpa));

    struct student_t student[5];

    for(int i = 0; i < 2; i++)
    {
        scanf("%s %d %c %lg", &student[i].name, &student[i].roll, &student[i].sex, &student[i].gpa);
    }

    for(int i = 0; i < 2; i++)
    {
        printf("%s %d %c %lg\n", student[i].name, student[i].roll, student[i].sex, student[i].gpa);
    }

    printstu(&s1);



}
