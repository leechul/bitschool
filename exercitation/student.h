

typedef struct student{
    int     mIdx;
    int     mNum;
    char    mName[20];
    int     mKorean;
    int     mEnglish;
    int     mMath;
    int     mAverage;
    char    mLevel;
    int     mIsUsed;
}Student;

int student_print(int idx);
int student_init(int idx);
void print_input_message();
Student students[100];
