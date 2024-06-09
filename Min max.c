#include<stdio.h>
int timChuSoMax(long n){
	int max = 0;
	while(n>0){
		int chuSo = n % 10;
		if(chuSo > max){
			max = chuSo;
		}
		n /= 10;
	}
	return max;
}
int timChuSoMin(long n){
	int min = 9;
	while(n > 0){
		int chuSo = n%10;
		if(chuSo < min){
			min = chuSo;
	    }
	    n /= 10;
	}
	return min;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		long n;
		scanf("%ld",&n);
		int chuSoMax = timChuSoMax(n);
		int chuSoMin = timChuSoMin(n);
		printf("%d %d\n",chuSoMax, chuSoMin);
	}
	return 0;
}
	
