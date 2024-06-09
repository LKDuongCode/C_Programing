#include <stdio.h>
void arrange(int*n){
	int a = *n,i,j,temp;
	int arr[a];
	for(int i=0;i<a;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	printf("gia tri cua mang la:\n");
	for(int i=0;i<a;i++){
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	printf("gia tri cua mang sau khi sap xep tang dan:\n");
	for (i=0;i<a-1;i++)
	{
    		for(j=0;j<a-i-1;j++){
     			if (arr[j]>arr[j+1]){
        			temp = arr[j];
       				arr[j] = arr [j+1]; 
        			arr[j+1] = temp;
     			 }
   			 }
 	}
 	for(int i=0;i<a;i++){
		printf("arr[%d]=%d\n",i,arr[i]);
	}
}
int main (){
	int n;
	printf("nhap so luong gia tri cua mang:");
	scanf("%d",&n);
	arrange(&n);
}
