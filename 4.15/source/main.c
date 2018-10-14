#include<stdio.h>
#include<stdlib.h>
main(){
	float a=0.1, b;
	printf("rate\tdeposit\n");
	for (int i = 1; i <= 5; i++){
		printf("%.1f%%\t", a * 100);
		b = 5000 * (1 + a);
		for (int j = 1; j <= 14; j++){
			b = b*(1 + a);
		}
		printf("%f\n", b);
		a = a + 0.005;
	}
	system("pause");
}