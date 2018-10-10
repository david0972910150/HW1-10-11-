#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int A;
	printf("the number is :");
	scanf_s("%d",&A);
	printf("\n");
	if (A % 2 == 0) 
		printf("%d is a even number",A);
	else 	printf("%d is a odd number", A);

		

	system("pause");
	return 0;

	
}