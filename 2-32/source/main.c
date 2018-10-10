#include<stdio.h>
#include<stdlib.h>

int main(void) {
	float b, w, h;
	printf("the height(そへ) is :");
	scanf_s("%f", &h);
	printf("the weight(そょ) is :");
	scanf_s("%f", &w);
	b = w / (h*h);
	printf("BMI= %.2f\n", b);

	if (b <18.5) {
		printf("You are underweight");
	}
	else if (b >= 18.5 && b <= 24.9) printf("you are normal");
	else if (b > 25 && b <= 29.9) printf("you are overweight");
	else if (b > 30) printf("you are obese");


	system("pause");
	return 0;
}