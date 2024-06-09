#include <stdio.h>
int main(){
	int n,deleteIndex;
	printf("nhap vao so phan tu cua mang : ");
	scanf("%d",&n);
	int integer[n],i;
	for(i = 0 ; i < n ; i++){
		printf("Nhap integer[%d] = ",i);
		scanf("%d",&integer[i]);
	}
	printf("Nhap vi tri xoa: ");
	scanf("%d",&deleteIndex);
	int new_Integer[n-1];
	for(i=0;i<deleteIndex;i++){
		new_Integer[i]=integer[i];
	}
	for(i=deleteIndex+1;i<n;i++){
		new_Integer[i-1]=integer[i];
	}
	for(i=0;i<n-1;i++){
		printf("%d\t",new_Integer[i]);
	}
	return 0;	
}
	
