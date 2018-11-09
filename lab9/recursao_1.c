#include<stdio.h>
#include<math.h>

int recursao(int n){
	if(n < 10){
		return n;
	}else{
		return  n%10 + recursao(n/10);
	}

}

int main(void){
	int n;

	scanf("%d", &n);

	printf("%d", recursao(n));
	return 0;

}


	

	
