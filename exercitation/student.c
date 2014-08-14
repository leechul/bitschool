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
    students[idx].mAverage = 0;
    students[idx].mLevel = 'F';
    students[idx].mIsUsed = 0;
}

int student_print(int idx)
{
    printf("[mIdx=%d][mNum=%d][mName=%s][mKorean=%d][mEnglish=%d][mMath=%d][mAverage=%d][mLevel=%c][mIsUsed=%d]\n",
    students[idx].mIdx,students[idx].mNum,students[idx].mName,students[idx].mKorean,students[idx].mEnglish,students[idx].mMath,students[idx].mAverage,students[idx].mLevel,students[idx].mIsUsed);

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
