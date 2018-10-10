#include<stdio.h>
#include<stdlib.h>



int main(void) {
	int a, b, c, max, min;
	
	printf("the three number is ");
	scanf_s("%d %d %d", &a, &b, &c);
	max = a;
	min = a;
	

	if (b > max) max = b; 
	if (b < min) min = b;
	if (c > max) max = c;
	if (c < min) min = c;

	

	

	printf("the max =%d\n",max);
	printf("the min=%d\n", min);

	system("pause");
	return 0;

}
