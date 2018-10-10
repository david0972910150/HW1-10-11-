#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int a, b;
	printf("input the two word:");
	scanf_s("%d%d", &a, &b);


	if (a%b == 0) printf("first word is a multiple of second/n");
	else printf("first word is not a multiple of second/n");

	system("pause");
	return 0;
}

