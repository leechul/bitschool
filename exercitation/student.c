#include <stdio.h>
#include <string.h>
#include </home/leechul/bitschool/exercitation/student.h>

int student_init(int idx)
{
    students[idx].mIdx = idx;
    students[idx].mNum = 0;
    strcpy( students[idx].mName, "Null");
    students[idx].mKorean = 0;
    students[idx].mEnglish = 0;
    students[idx].mMath = 0;
    students[idx].mSum = 0;
    students[idx].mAverage = 0;
    students[idx].mLevel = 'F';
    students[idx].mIsUsed = 0;
}

int student_print(int idx)
{
    //printf("[mIdx=%d][mNum=%d][mName=%s][mKorean=%d][mEnglish=%d][mMath=%d][mSum=%d][mAverage=%d][mLevel=%c][mIsUsed=%d]\n",
    //students[idx].mIdx,students[idx].mNum,students[idx].mName,students[idx].mKorean,students[idx].mEnglish,students[idx].mMath,students[idx].mSum,students[idx].mAverage,students[idx].mLevel,students[idx].mIsUsed);
    printf("%d\t%s\t%d\t%d\t%d\t%d\t%d\t%c\n",
    students[idx].mNum,students[idx].mName,students[idx].mKorean,students[idx].mEnglish,students[idx].mMath,students[idx].mSum,students[idx].mAverage,students[idx].mLevel,students[idx].mIsUsed);

}

int getStudent()
{
    int i;
    for ( i = 0; i < 100; i++)
    {
        if ( students[i].mIsUsed == 0 )
        {
            students[i].mIsUsed = 1;
            return i;
        }
    }
    printf(" students are full ");
}

int setStudent(int idx, int num, char* name, int korean, int english, int math)
{
    students[idx].mNum = num;
    strcpy( students[idx].mName, name);
    students[idx].mKorean = korean;
    students[idx].mEnglish = english;
    students[idx].mMath = math;
    students[idx].mSum = sum(korean, english, math);
    students[idx].mAverage = average(korean, english, math);
    students[idx].mLevel = level( students[idx].mAverage );
}


int sum(int a, int b, int c)
{
	int i;
	i = (a+b+c);
	return i;
}

int average(int a, int b, int c)
{
	int i;
	i = (sum(a, b, c))/3;
	return i;
}


char level( int a )
{
	if ( a >=90 && a <= 100) {return 'A';}
	if ( a >=80 && a < 90) {return 'B';}
	if ( a >=70 && a < 80) {return 'C';}
    if ( a >=60 && a < 70) {return 'D';}
	if ( a >=0 && a < 60) {return 'F';}
	else{
		return '?';
	     }
}

void sort_students()
{
    int i, j;
    Student tmp;
    for (i = 0 ; i < 100-1 ; i++)
    {
        for (j = 0 ; j < 100-1; j++)
        {
            if (students[j].mIsUsed == 1 && students[j+1].mIsUsed ==1)
            {
            if (students[j].mNum > students[j+1].mNum)
            {
                //printf(" if start ");
                //tmp = students[j];
                //students[j] = students[j+1];
                //students[j+1] = tmp;
                memcpy(&tmp, &students[j], sizeof(Student));
                memcpy(&students[j], &students[j+1], sizeof(Student));
                students[j].mIdx = j;
                memcpy(&students[j+1], &tmp,sizeof(Student));
                students[j+1].mIdx = j+1;
            }
            }
        }
    }
}




void print_input_message()
{
    print_line();
    printf("정보를 입력하여 주세요\n");
    print_line();
    printf("번호\t이름 국어 영어 수학\n");
}
void print_output_message()
{
    printf("번호\t이름\t국어\t영어\t수학\t총점\t평균\t등급\n");
}
void print_line()
{
    printf("*************************************************************\n");
}
