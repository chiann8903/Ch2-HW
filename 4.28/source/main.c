#include<stdio.h>
#include<stdlib.h>
main(){
	int c;
	float h,t,r;
	printf("input paycode(1~4,1:Managers 2:Hourly workers 3:Commission workers 4:Pieceworkers):");
	scanf_s("%d", &c);
	switch (c){
	case 1:
		printf("employee's pay:$1000.0");
		break;
	case 2:
		printf("enter hours the empolyee worked:");
		scanf_s("%f", &h);
		printf("enter hourly rate of the worker:");
		scanf_s("%f", &r);
		if (h <= 40)
			t = h*r;
		else
			t = h*r*1.5;
		printf("employee's pay:$%.1f", t);
		break;
	case 3:
		printf("enter the employee's gross weekly sales:");
		scanf_s("%f", &h);
		t = 250 + (h*0.057);
		printf("employee's pay:$%.1f", t);
		break;
	case 4:
		printf("enter how many does the employee produced :");
		scanf_s("%f", &h);
		t = h * 0.1;
		printf("employee's pay:$%.1f", t);
		break;
	}
	printf("\n");
	system("pause");
}