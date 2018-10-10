#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int i, j,x,y,k,d;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 9; j++) {
			if (i == 0) printf("P");
			else if (i == 1 || i == 2 || i == 3) {
				if (j == 4 || j == 8) printf("P");
				else printf(" ");
			}
			else {
				if (j == 5 || j == 7)printf("P");
				else printf(" ");
			}
		}
			printf("\n");

		}
		printf("\n");
		printf("\n");

		for (x = 0; x < 5; x++) {
			for (y = 0; y < 9; y++) {
				if (x == 0) {
					if (y == 2 || y == 3)printf("J");
					else printf(" ");
				}
				else if (x == 1 || x==3) {
					if (y == 1) printf("J");
					else printf(" ");
				}
				else if (x == 2) {
					if (y == 0) printf("J");
					else printf(" ");
				}
				else {
					if (y>1) printf("J");
					else printf(" ");
				}




			}
			printf("\n");
		}
		printf("\n");
		printf("\n");

		for (k = 0; k < 5; k++) {
			for (d = 0; d < 9; d++) {
				if (k == 0) printf("D");
				else if (k == 1 || k == 2) {
					if (d == 0 || d == 8) printf("D");
					else printf(" ");
				}
				else if (k == 3) {
					if (d == 1 || d == 7) printf("D");
					else printf(" ");
				}
				else {
					if (d == 2 || d == 3 || d == 4 || d == 5 || d == 6) printf("D");
					else printf(" ");
				}
				
			}
			printf("\n");
		}
		printf("\n");
	system("pause");
	return 0;
}