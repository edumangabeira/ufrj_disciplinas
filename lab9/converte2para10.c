#include<stdio.h>
#include<math.h>

int converte2para10(int n, int exp){
	if(n == 0){
		return 1*n;
		}else{
			return converte2para10(n/10, exp+1) + (n%10) * pow(2,exp);
		}
	}

int main(void){
	int a, b;
	b = 0;
	scanf("%d", &a);
	printf("%d", converte2para10(a, b));

	return 0;
}