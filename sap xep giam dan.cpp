#include<stdio.h>
int main (){
	int number[]={3,7,4,6,2};
	int n= sizeof(number)/sizeof(int);
	// duyet tung phan tu cua mang chua duoc sap xep
	for (int i=1; i<n ; i++){
		int key = number[i];// luu gia tri cua mang chau sap xep vao key
		int j = i-1;
		while ( j>=0 && key > number[j]){
			// day phan tu j sang vi tri phia sau 
			number[j+1] = number[j];
			j=j-1;
		}
		number[j+1] = key;
	}
	for ( int i=0; i< size;i++){
		printf("")
	}
}
