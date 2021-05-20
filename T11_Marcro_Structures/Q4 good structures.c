#include<stdio.h>
#pragma pack(1)    // convets 32 to 24

struct studentsInfo_t{
    char name[11];
    int roll;
    char sex;
    double gpa;
};

void printS(struct studentsInfo_t student) {
printf("%s %d  %c %lg \n", student.name, student.roll, student.sex, student.gpa);
}

void printSadd(struct studentsInfo_t *p_student) {
printf("%s %d  %c %lg \n", p_student->name, p_student->roll, p_student->sex, p_student->gpa);
}


int main(){

struct studentsInfo_t s1={"sdfg", 2001083, 'M', 9.8}, s2={"Mr X",32324, 'M', 3.5};
        printS(s1);
        printS(s2);

        printSadd(&s1);   // adress important
        printSadd(&s2);

 printf("%d %d %d %d %d\n", sizeof(struct studentsInfo_t),  &(s1.name), &(s1.roll), &(s1.sex), &(s1.gpa));

    return 0;
}
