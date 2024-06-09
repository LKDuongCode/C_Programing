#include<stdio.h>

int main(){
	int A[10];
	for(int i=0; i<10; i++){
		scanf("%d", &A[i]);
	}
	int distinct_nums[42] = {0};
	for(int i=0; i<10; i++){
		int remainder = A[i] % 42;
		distinct_nums[remainder] = 1;
	}
	int count = 0;
	for(int i=0; i<42; i++){
		if(distinct_nums[i] == 1){
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}
