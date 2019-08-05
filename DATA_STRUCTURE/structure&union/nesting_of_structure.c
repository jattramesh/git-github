//
// Created by rahul on 2/8/19.
#include <stdio.h>
typedef struct {
    char first_name[20];
    char mid_name[20];
    char last_name[20];
}Name;
typedef struct{
    int dd;
    int mm;
    int yy;
}DATE;
typedef struct{
    int r_no;
    Name name;
    char course[20];
    DATE dob;
    float fees;
}student;
int main()
{
    student rahul;
    rahul.r_no=12;
    scanf("%s",rahul.name.first_name);
    scanf("%s",rahul.name.mid_name);
    scanf("%s",rahul.name.last_name);
    rahul.dob.dd=15;
    rahul.dob.mm=11;
    rahul.dob.yy=2019;
    printf("%s\n%s\n%s\n",rahul.name.first_name,rahul.name.mid_name,rahul.name.last_name);
    printf("%d%d%d%d",rahul.r_no,rahul.dob.dd,rahul.dob.mm,rahul.dob.yy);
}
