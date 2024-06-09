#include <stdio.h>
int main(){
	//B1: Khai bao bien va nhap thong tin mang
	int addValue, addIndex, n;
	printf("Nhap vao so phan tu cua mang:");
	scanf("%d",&n);
	printf("Nhap vao gia tri can chen vao mang:");
	scanf("%d",&addValue);
	printf("Nhap vao chi so can chen vao mang:");
	scanf("%d",&addIndex);
	int oldNumbers[n];
	printf("Nhap gia tri cac phan tu cua mang:\n");
	for(int i=0;i<n;i++){
		printf("oldNumbers[%d]=",i);
		scanf("%d",&oldNumbers[i]);
	}
	//B2: Kiem tra addIndex lon hon (n-1) khong
	if(addIndex<n){
		//B3: Xu ly voi truong hop addIndex <= n-1
		int newNumbers[n+1];
		//B3.1. Duyet mang newNumbers - i
		for(int i=0; i<n+1; i++){
			//B3.1.1. i<addIndex
			if(i<addIndex){
				newNumbers[i] = oldNumbers[i];
			}else if(i==addIndex){
				//B3.1.2. i==addIndex
				newNumbers[i] = addValue;
			}else{
				//B3.1.3. i>addIndex
				newNumbers[i] = oldNumbers[i-1];
			}		
		}	
		//In ra mang sau khi chen
		printf("Mang sau khi chen phan tu la:\n");
		for(int i=0; i<n+1; i++){
			printf("%d\t",newNumbers[i]);
		}		
	}else{
		//B4: Xu ly voi truong hop addIndex > n		
		//B4.1. Khoi tao mang newNumber[addIndex+1]
		int newNumbers[addIndex+1];
		//B4.2. Duyet mang - i
		for(int i=0; i<addIndex; i++){
			//B4.2.1: i<n copy toan bo phan tu tu oldNumber sang newNumber
			if(i<n){
				newNumbers[i] = oldNumbers[i];
			}else{
				//B4.2.2 n<=i<addIndex: 0
				newNumbers[i] = 0; 
			}
		}			
			//B4.2.3. newNumber[addIndex] = addValue
		newNumbers[addIndex] = addValue;
		//In ra mang sau khi chen
		printf("Mang sau khi chen phan tu la:\n");
		for(int i=0; i<=addIndex; i++){
			printf("%d\t",newNumbers[i]);
		}		
	}
	
}
