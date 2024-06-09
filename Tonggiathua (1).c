#include<stdio.h>

long long calculate(int n){
	long long factorial = 1;
	for(int i=1; i<=n; i++){
		factorial *= i;
	}
	return factorial;
}

int main(){
	int n;
	scanf("%d", &n);
	
	long long sum = 0;
	for(int i=1; i<=n; i++){
		long long factorial = calculate(i);
		sum += factorial;
	}
	printf("%lld\n", sum);
	return 0;
}
