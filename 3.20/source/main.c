#include<stdio.h>
#include<stdlib.h>
main(){
	float h, r, s;
	for (int i = 0; i <= 10; i++){
		printf("enter # of hours worked (-1 to end):");
		scanf_s("%f", &h);
		if (h == -1)
			break;
		printf("ener hourly rate of the worker ($00.00):");
		scanf_s("%f", &r);
		if (h < 40)
			s = h*r;
		else
			s = h*1.5*r;
		printf("salary is $%.2f\n\n", s);
		i = 0;
	}
	system("pause");
}