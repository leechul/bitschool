#include <stdio.h>

int sum(int a, int b, int c);
int average(int a, int b, int c);
char level(int a);

int main()
{
	int a, b, c;
	printf(" please input three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	//scanf("%d",&b);
	//scanf("%d",&c);
	printf("sum=%d\n",sum(a,b,c));
	printf("average=%d\n",average(a,b,c));
	printf("level=%c\n",level(average(a,b,c)));
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
	if ( a >=0 && a < 70) {return 'F';}
	else{
		return '?';
	     }
}
