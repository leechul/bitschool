#include <stdio.h>
#include </home/leechul/bitschool/exercitation/student.h>

//Student students[100];
int getInfo();

int main ()
{
    int  i;
    for ( i = 0; i < 100; i++)
    {
        student_init(i);
    }
    getInfo();
    printf("%d",getStudent());
}

int getInfo()
{
    print_input_message();
    char name[20];
    int num, korean, english, math;
    scanf("%d%s%d%d%d",&num,&name,&korean,&english,&math);
    int idx;
    idx = getStudent();
    setStudent(idx, num, name, korean, english, math);
    student_print(idx);
}
