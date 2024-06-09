#include<stdio.h>
void displayNumb(int *ptrN,int sizeCln)
{
	// int arr[] = {2,4,6,8,10};
	// sua thanh *ptrN
	// int sizeCln = 5;
	printf("Mang sau khi hien thi:\n");
	for(int i=0;i<sizeCln;i++)
	{
		printf("arr[%d] = %d\n",i,*(ptrN+i));
	}
}
int main()
{
	/*
	1.khai bao con tro
	type *ptrName;
	type *ptrName = &address
	
	2. su dung con tro
	- thao tac voi dia chi:ptrName
	- gia tr ma con tro dang tro toi: *ptrName
	vd: *pointer = 
		(*pointer)++
		
	3. khai bao con tro lam tham so trong ham
	-khi thuc thi ham thi truyen vao dia chi cua bien vao trong ham lam doi so
	*/
//	int arr[] = {3,5,7,9};
//	printf("Day la dia chi cua bien arr[] = %d\n",arr);
//	
//	int *ptr = arr;
//	printf("Day la dia chi ma ptr dang tro den = %d\n",ptr);
//	
//	printf("Day la dia chi cua bien arr[0] = %d\n",&arr[0]);
//	// ---> khi tao ra bien mang thi dia chi cua mang thi trung voi dia chi cua phan tu thu 0.
//	
//	printf("Gia tri hien tai trc khi tang cua ptr = %d\n",ptr);
//	ptr++;// no tro den arr[1] thay vi arr[0] nhu luc dau.
//	printf("Gia tri sau khi tang cua ptr = %d\n",ptr);
//	
//	int size = sizeof(arr)/sizeof(int);
//	for(int i=0;i<size;i++)
//	{
//		printf("arr[%d] = %d, arr[%d] = %d \n",i,arr[i],i,&arr[i]);
//		printf("arr[%d] = %d, arr[%d] = %d \n",i,arr[i],i,*(arr+i));
		// thay *(ptr+i) = &arr[i] thi ; *(ptr+i) = *(arr+i)
		// se hien thi dia chi cua tung phan tu trong mang
		// *ptr cua la dia chi cua arr va arr[0].
		// dung toan tu * de lay ra gia tri cua phan tu.
	
//	}
	int numb[] = {2,4,6,8,10};// truyen mang vao ham
	int size = sizeof(numb)/sizeof(int);
	displayNumb(numb,size); // goi ngam hieu rang : displayNumb(&addressNumb, size) 
	// rieng mang va string thi khong can su dung & nhung else thi can su dung &.
	
	return 0;
}
