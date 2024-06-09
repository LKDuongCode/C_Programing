#include<stdio.h>
int main(){
	printf(" nhap so phan tu:");
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	int i,findValue;
	printf("nhap gia tri can tim:");
	scanf("%d",&findValue);
	int flagSearch = 0;// co danh dau khong tim thay phan tu nao
	for (i=0;i<n;i++){
		if (findValue == arr[i]){
			flagSearch = 1; // co tim thay phan tu
			break;
		}
		
	}
	// in ra 
	if (flagSearch == 1){
		printf("trong mang co chi so phan tu %d co gia tri %d",i,arr[i]);	
	}
	else {
		printf("khong tim thay phan tu co gia tri %d trong mang",findValue);
	}
}
