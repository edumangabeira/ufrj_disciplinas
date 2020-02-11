#include<stdio.h>

int euclides0(int m, int n) {
	int r;
	do {
		r = m%n;
		m = n; n = r;
	} while (r != 0);
	return m;
}

int euclides1(int m, int n){

	if(m%n == 0){
		return n;
	}else{

	return euclides1(n, m%n);
	}
}

int main(void){
	int a, b;
	puts("digite dois inteiros separados por espacos");
	scanf("%d%d",&a,&b);
	printf("%d\n", euclides0(a,b));
	printf("%d\n", euclides1(a,b));
	return 0;
}