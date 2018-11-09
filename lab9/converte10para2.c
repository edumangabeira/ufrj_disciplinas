#include<stdio.h>
void converte10para2(int decimal){
	if (decimal == 0){
		printf("%d", decimal);
	}else{
		if (decimal == 1){
			printf("%d", decimal);
		}else{
		converte10para2(decimal/2);
		printf("%d", decimal%2);
		}
	}
}
int main(void){
	int decimal;
	printf("digite o numero que deseja convertar para  a base 2\n\n:");
	scanf("%d",&decimal);
	converte10para2(decimal);
	return 0;
}

