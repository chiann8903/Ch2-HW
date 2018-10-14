#include<stdio.h>
#include<stdlib.h>
main(){
	float d,s;
	for (int i = 0; i <= 10; i++){
		printf("enter sales in dollers (-1 to the end):");
		scanf_s("%f", &d);
		if (d == -1)
			break;
		s = d*0.09 + 200;
		printf("salary is %.2f\n\n", s);
		i = 0;
	}
	system("pause");
}