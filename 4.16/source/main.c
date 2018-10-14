#include<stdio.h>
#include<stdlib.h>
main(){
	int a = 1;
	printf("(A)\n");
	for (int i = 1; i <= 10; i++){
		for (int j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	//===========
	printf("(B)\n");
	for (int i = 10; i > 0; i--){
		for (int j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	//===========
	printf("(C)\n");
	for (int i = 1; i <= 10; i++){
		for (int j = 1; j <= i; j++){
			printf(" ");
		}
		for (int k = 1; k <= (10 - i); k++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	//===========
	printf("(D)\n");
	for (int i = 10; i > 0; i--){
		for (int j = 1; j <= i; j++){
			printf(" ");
		}
		for (int k = 1; k <= (10 - i); k++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	system("pause");
}