#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int m=0, a, b, c, d, e;
	printf("total distance by day:");
	scanf_s("%d", &a);
	printf("cost by gas:");
	scanf_s("%d", &b);
	printf("distance by single gas:");
	scanf_s("%d", &c);
	printf("parking fee:");
	scanf_s("%d", &d);
	printf("passing fee:");
	scanf_s("%d", &e);

	m = (a / c)*b + d + e;
	printf("the total money is %d", m);

	system("pause");
	return 0;
}