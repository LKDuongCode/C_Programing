#include<stdio.h>
#include<string.h>
int main(){
	int a;
	scanf("%d",&a);
	while (a--){
		char N[501];
		scanf("%s",N);
		int size = strlen(N);
		long long k = 1;
		for(int i=0;i<size;i++){
			int n = N[i] - '0';
			if(n != 0){
				k *= n;
				if (k > 1e18){
					k=-1;
					break;
				}
			}
		}
		if(k == -1){
		printf("Ket qua lon hon 18 chu so.");
		}
		else {
			printf("%lld\n",k);
		}
	}
	
	return 0;
}
