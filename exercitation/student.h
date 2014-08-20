

typedef struct student{
    int     mIdx;
    int     mNum;
    char    mName[20];
    int     mKorean;
    int     mEnglish;
    int     mMath;
    int     mSum;
    int     mAverage;
    char    mLevel;
    int     mIsUsed;
}Student;

int student_print(int idx);
int student_init(int idx);
void print_input_message();
int getStudent();
int setStudent(int idx, int num, char* name, int korean, int english, int math);
int sum(int a, int b, int c);
int average(int a, int b, int c);
char level(int a);
void print_output_message();
void sort_students();
void print_line();
Student students[100];
