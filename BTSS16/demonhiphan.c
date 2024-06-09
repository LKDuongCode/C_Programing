#include<stdio.h>
int main ()
{
	FILE *nhiPhan;
	int ia[5];
	int ib[5];
	
	//duyet nhap vao mang ia
	for(int i=0;i<5;i++)
	{
		printf("ia[%d] = ",i);
		scanf("%d",&ia[i]);
	}
	
	// Mo tep tin de doc nhi phan
	nhiPhan = fopen("C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\BTSS16\\demonhiphan.bin","wb");
	
	// kiem tra co mo duoc file ghi hay ko
	if (nhiPhan==NULL)
	{
		printf("Khong the mo file de ghi.");
		return 1;
	}
	
	// neu duoc thi ghi du lieu vao file nhi phan
	fwrite(ia,sizeof(int),sizeof(ia),nhiPhan);
	
	fclose(nhiPhan);
	
	// Mo tep tin de doc nhi phan lan 2
	nhiPhan = fopen("C:\\Users\\DELL\\OneDrive\\Documents\\C PROGRAMING\\BTSS16\\demonhiphan.bin","rb");
	
	// kiem tra co mo duoc file ghi hay ko
	if (nhiPhan==NULL)
	{
		printf("Khong the mo file de ghi.");
		return 1;
	}
	
	// doc file nhi phan
	fread(ib,sizeof(int),sizeof(ib),nhiPhan);
	
	// in du lieu trong file nhi phan
	for(int i=0;i<5;i++)
	{
		printf("%d \t",ib[i]);
	}
	
	//dong tep tin
	fclose(nhiPhan);
	return 0;
} 
