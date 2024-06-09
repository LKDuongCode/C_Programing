#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char N[501];
		scanf("%s", N);
		int len = strlen(N);
		long long product = 1;
		for(int i=0; i<len; i++){
			int digit = N[i] - '0';
			if(digit != 0){
				product *= digit;
				if (product > 1e18){
					product = -1;
					break;
				}
			}
		}
		if(product == -1){
			printf("Ket qua vuot qua 18 chu so\n");
		} else{
			printf("%lld\n", product);
		}
	}
	return 0;
}
