#include<stdio.h>
void printHello(){
	printf("Hello may ban chep bai !!");
}
void printNumElements(int num[]){
	int size = 4; 
	for (int i=0;i<size;i++){
		printf("num[%d] = %d\n",i,num[i]);
	}
}
int sum(int a, int b){//input 
	return a+b; //output 
} // gap tu khoa return thi code se bi dung, khong chay doan sau 

int main(){
//	int num[] = {2,3,7,4};
//	int command;
//	int uIndex,uValue;
//	printf("Nhap 1 de in ra toan bo phan tu co trong mang.\n");
//	printf("Nhap 2 de tine hanh update mot phan tu trong mang.\n");
//	printf("Lua chon cua ban:");
//	scanf("%d",&command);
//	int size = 4;
//	if( command ==1){
//		// tien hanh in ra toan bo phan tu trong mang
//		printNumElements(num); 
//	}
//	else if(command == 2){
//		printf("nhap vao vi tri phan tu muon cap nhat:");
//		scanf("%d",&uIndex);
//		if(uIndex<0 || uIndex>=size){
//			printf("Khong hop le.");
//		}
//		else{
//			printf("nhap vao gia tri muon cap nhat:");
//			scanf("%d",&uValue);
//			num[uIndex] = uValue;
//			printNumElements(num); 
//		}
//	}
//		
//		// tien hanh up mot phan tu nao do
//		// sau do in ra toan bo mang da up
//		// goi ten ham
//	printHello();
//	return 0;// main cung la mot ham 

	// viet mot ham nhan vao hai tham so a va b, tinh tong hai tham so a va b , tra ve gia tri tong do.
	int k = sum(10,20);
	printf("%d",k); 
 	return (0); 
}
	
