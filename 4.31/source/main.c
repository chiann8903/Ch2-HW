#include<stdio.h>
#include<stdlib.h>
main(){
	int a = 5, b = 5, c = 2,d=8;
	for (int i = 1; i <= 5; i++){
			for (int j = 1; j <= b; j++){
				if (j < a)
					printf(" ");
				else
					printf("*");
		}
		a--;
		b++;
		printf("\n");
	}
	for (int i = 4; i > 0; i--){
		for (int j =1 ; j <= d; j++){
			if (j < c)
				printf(" ");
			else
				printf("*");
		}
		c++;
		d--;
		printf("\n");
	}
	system("pause");
}