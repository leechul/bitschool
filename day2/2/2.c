#include <stdio.h>
#define PI 3.14

int main()
{
	float r;
	printf("please input r \n");
	scanf("%f", &r);
	printf("girth = %f\n", (2*PI*r));
	printf("breadth = %f\n", (PI*r*r));
}
