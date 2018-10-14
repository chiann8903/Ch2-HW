#include<stdio.h>
#include<stdlib.h>
main(){
	float ii, p, r, d,l;
	for (int i = 0; i <= 10; i++){
		printf("enter loan principle (-1 to the end):");
		scanf_s("%f", &p);
		if (p == -1)
			break;
		printf("enter interset rate:");
		scanf_s("%f", &r);
		printf("enter term of the loan in days:");
		scanf_s("%f", &d);
		ii = p*r*d / 365;
		printf("the interest charge is $%.2f\n\n", ii);
		i = 1;
	}
	system("pause");
}