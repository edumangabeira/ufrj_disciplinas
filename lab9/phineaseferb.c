#include<stdio.h>

int fibonacci(int num){
	if(num == 0){
		return num;
	}else{
		if(num == 1){
			return num;
		}else{

	return fibonacci(num-2) + fibonacci(num-1);
		}
	}
}
int main(void){
	int num;
	scanf("%d", &num);

	printf("%d",fibonacci(num));
	return 0;
}