#include<stdio.h>
#include<stdlib.h>

int main()
{
	//nhap so phan tu mang hai chieu
	int n,m;
	printf("Nhap so hang va so cot cua mang 2 chieu:");
	scanf("%d",&m);
	scanf("%d",&n);
	//khai bao va nhap gia tri cho mang 2 chieu m*n
	int arr[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("Nhap arr[%d][%d]",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	//tao menu
	do
	{
		printf("===============MENU================");
		printf("\n1.Nhap gia tri phan tu cua mang\n");
		printf("2.In ra cac phan tu cua mang theo ma tran\n");
		printf("3.In ra gia tri cac phan tu le va tinh tong\n");
		printf("4.In ra gia tri phan tu nam tren duong bien va tinh tich\n");
		printf("5.In ra cac phan tu tren duong cheo chinh va cheo phu va tinh tong\n");
		printf("6.In gia tri nho nhat va lon nhat\n");
		printf("7.In ra gia tri trung binh va so phan tu bang gia tri trung binh cua mang\n");
		printf("8.In ra dong co tong gia tri phan tu la lon nhat");
		printf("9.Thoat\n");
		printf("Lua chon cua ban: \n");
		//lua chon menu
		int choice,sum,min,max,avg,count,maxRow;
		int mulNumber;
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				for(int i=0;i<m;i++)
	            {
		            for(int j=0;j<n;j++)
		            {
			            printf("Nhap arr[%d][%d]",i,j);
			            scanf("%d",&arr[i][j]);
		            }
	            }
	            break;
	        case 2:
	        	printf("gia tri cac phan tu trong mang:");
	        	for(int i=0;i<m;i++)
	        	{
	        		for(int j=0;j<n;j++)
	        		{
	        			printf("%d\t",arr[i][j]);
					}
					printf("\n");// xuong dong de in ra ma tran
				}
				break;
			case 3:
				 sum=0;
				for(int i=0;i<m;i++)
				{
					for(int j=0;j<n;j++)
					{
						if(arr[i][j]%2 != 0)
						{
							printf("%d/t",arr[i][j]);
							sum+=arr[i][j];
						}
					}
				}
				printf("\nTong cac phan tu le la: %d\n",sum);
				break;
			case 4:// tren bien la nam ben ngoai ria
				mulNumber = 1;
				printf("cac phan tu nam tren duong bien: \n");
				for (int i=0; i< m; i++){
					for (int j=0; j<n1; j++){
						
					}
				}
				break;
			case 5:// chi xuat hien duong cheo chinh va cheo phu
				sum = 0;
				if (n==m){
					printf("cac phan tu cheo chinh");
					for (int i=0; i<m; i++){
						for(int j=0; j<n; j++){
							if (i==j){
								printf("%d\n", arr[m][n]);
								sum = sum + arr[m][n];
							}
						}
					}
					printf("tong phan tu tren cheo chinh:")
				}
				else {
					printf("day khong phai mang hinh vuong nen khong co cheo chinh va cheo phu");
				}
				break;
			case 6:
			    min=arr[0][0];
				max=arr[0][0];
				for(int i=0;i<m;i++)
				{
					for(int j=0;j<n;j++)
					{
						if (min>arr[i][j])
						{
							min=arr[i][j];
						}
						if(max<arr[i][j])
						{
							max=arr[i][j];
						}
					}
				}
				printf("Gia tri nho nhat: %d.-- Gia tri lon nhat:%d",min,max);
				break;
			case 7:
				sum=0;
				count=0;
				for(int i=0;i<m;i++){
					for(int j=0;j<n;j++){
						sum+=arr[i][j];
					}
				}
				avg=sum/(m*n);// tong chia so phan tu cua mang
				for(int i=0;i<m;i++){
					for(int j=0;j<n;j++){
						if(arr[i][j]==avg){
							count++;
						}
					}
				}
				printf("Gia tri trung binh cua mang la: %d,So phan tu bang gia tri trung binh: %d",avg,count);
				break;
			case 8:
				// dat maxRow dong dau
				maxRow=0;
				max=0;
				for(int i=0;i<m;i++){
					sum=0;
					for(int j=0;j<n;j++){
						sum = sum + arr[i][j];
					}
					if(sum>max){
						max=sum;
						maxRow=i;
					}					
				}
				printf("Dong co gia tri phan tu lon nhat la: %d",maxRow);
				break;
			case 9:
				
				break;
			case 10:
				exit(0);
			default:
				printf("Vui long chon tu 1 den 9");											 			    								
		}
	}
	while(1==1);
}
