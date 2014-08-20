#include <stdio.h>
#include </home/leechul/bitschool/exercitation/student.h>
//test
//Student students[100];
int getInfo();

int main ()
{
    int  i;
    for ( i = 0; i < 100; i++)
    {
        student_init(i);
    }
    //getInfo();
    //printf("%d",getStudent());
    print_input_message();
    getInfo();
    getInfo();
    getInfo();
    getInfo();
    sort_students();
    print_line();
    print_output_message();
    print_line();
    student_print(0);
    student_print(1);
    student_print(2);
    student_print(3);
    print_line();

}

int getInfo()
{
    //print_input_message();
    char name[20];
    int num, korean, english, math;
    scanf("%d%s%d%d%d",&num,&name,&korean,&english,&math);
    int idx;
    idx = getStudent();
    setStudent(idx, num, name, korean, english, math);
    //student_print(idx);
    //print_output_message();
}
