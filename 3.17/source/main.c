#include<stdio.h>
#include<stdlib.h>
main(){
	float a, b, ch, cr, l,t;
	for (int i = 0; i < 10; i++){
		printf("enter account number(-1 to the end):");
		scanf_s("%f", &a);
		if (a == -1)
			break;
		printf("enter beginning balance:");
		scanf_s("%f", &b);
		printf("enter total charges:");
		scanf_s("%f", &ch);
		printf("enter total credits:");
		scanf_s("%f", &cr);
		printf("enter credit limit:");
		scanf_s("%f", &l);
		t = b + ch - cr;
		if (t > l)
			printf("\ncredit limit exceeded.");
		printf("\n\n");
		i = 1;
	}
	system("pause");
}