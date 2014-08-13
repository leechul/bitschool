#include <stdio.h>
void cumulative_totals(int arg1, int arg2);
void division(int arg1, int arg2);
void swap(int* arg1, int* arg2);
void breadth(int arg1, int arg2);

int main( int argc, const char* argv[])
{
	int Num1, Num2;
	printf("Please input two int number\n");
	scanf("%d",&Num1);
	scanf("%d",&Num2);
	//printf("%d, %d",Num1, Num2);
	//cumulative_totals(Num1, Num2);
	division(Num1, Num2);
	//breadth(Num1, Num2);
	return 0;
}

void cumulative_totals(int arg1, int arg2)
{
	int i, sum=0;
	for ( i = arg1; i <= arg2; i++)
	{
		sum += i;
		printf (" %d cumulative totals = %d \n",i, sum);
	}
}

void division(int arg1, int arg2)
{
	if ( arg1 < arg2 )
	{
		printf("arg1 < arg2\n");
		swap( &arg1, &arg2);
	}
	
	printf ("%d/%d=%d remainder=%d\n",arg1, arg2, arg1/arg2, arg1%arg2);
}

void swap(int* arg1, int* arg2)
{
	int tmp;
	tmp = *arg1;
	*arg1 = *arg2;
	*arg2 = tmp;
}

void breadth(int arg1, int arg2)
{
	printf("breadth = %d * %d = %d\n",arg1, arg2, arg1*arg2);
}
