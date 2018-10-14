#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	int a = 1,b=0;
	printf("Hypotenuse\tBottom edge\tOpposite\n");
	for (int i = 1; i <= 500; i++){
		if (a == 2)
			break;
		for (int j = 1; j <= 500; j++){
			for (int k = 1; k <= 500; k++){
				if (i*i == j*j + k*k){
					printf("%4d\t\t%4d\t\t%4d\n", i, j, k);
				}
				if (i > 500){
					a = 2;
				}
			}
		}
	}
	system("pause");
}