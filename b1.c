#include<stdio.h>

long long cal(int nCln){
	long long kCln = 1;
	for(int i=1; i<=nCln; i++){
		kCln *= i;
	}
	return kCln;
}

int main(){
	int n;
	scanf("%d", &n);
	
	long long tong = 0;
	for(int i=1; i<=n; i++){
		long long k = cal(i);
		tong += k;
	}
	printf("%lld\n", tong);
	return 0;
}
