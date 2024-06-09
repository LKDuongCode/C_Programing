#include<stdio.h>
int testSymmetric(int numb[],int n){
	int i;
	for(i=0;i<n;i++){
		if(numb[i]!=numb[n-1-i]){//so sanh 
		 return 0;// khong doi xung
		}	
	}
	return 1;// doi xung
}
int main()
{
	int numA[]={1,63,2,4,52,6,2,56,2};
	int x=sizeof(numA)/sizeof(int);
	if(testSymmetric(numA,x))
	{
		printf("Mang 1 la mang doi xung\n");
	} else{
		printf("Mang 1 khong phai la mang doi xung\n");
	}
	int numB[]={1,2,3,4,5,4,3,2,1};
	int y=sizeof(numB)/sizeof(int);
	if(testSymmetric(numB,y)){
		printf("Mang 2 la mang doi xung\n");
	}else{
		printf("Mang 2 khong phai la mang doi xung\n");
	}
	return 0;
}
