#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int a;
	printf("number  square  cube\n");
	for (a = 0; a < 11; a++) {
		printf("%d\t%d\t%d\n",a,a*a,a*a*a);
	}
	system("pause");
	return 0;
}