#include<stdio.h>
#include<stdlib.h>
main(){
	int l, b;
	printf("input the length of rectangle:");
	scanf_s("%d", &l);
	printf("input the breadth of rectangle:");
	scanf_s("%d", &b);
	for (int i = 1; i <= l; i++){
		for (int j = 1; j <= b; j++){
			if (i == 1 || i == l)
				printf("+");
			else if (j == 1 || j == b)
				printf("+");
			else
				printf(" ");
		}
		printf("\n");
	}
	system("pause");
}