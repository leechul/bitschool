#include <stdio.h>
#include </home/leechul/bitschool/exercitation/student.h>

//Student students[100];

int main ()
{
    int  i;
    for ( i = 0; i < 100; i++)
    {
        student_init(i);
        student_print(i);
    }

    print_input_message();
}
