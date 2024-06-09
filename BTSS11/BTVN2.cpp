#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int n,m;
	printf("Nhap so hang va so cot: ");
	scanf("%d %d",&n,&m);
	int num[n][m];
	do{
		printf("**********************MENU**********************\n");
		printf("1. In ra gia tri mang theo ma tran\n");
		printf("2. Sap xep mang co gia tri cac phan tu theo dong tang dan\n");
		printf("3. Sap xep mang co gia tri cac phan tu theo cot giam dan\n");
		printf("4. Thoat\n");
		printf("Lua chon cua ban");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("number[%d][%d]= ",i,j);
						scanf("%d",&num[i][j]);
					}
				}
				printf("In gia tri cac phan tu trong mang: :\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("%d\t",num[i][j]);
					}
					printf("\n");
				}
				break;
			case 2:
		        for(int i=0;i<n;i++){
		        	for(int j=1;j<m;j++){
		        		int key = num[i][j];
		        		int k=j-1;
		        		while(k>=0 && key < num[i][k]){
		        			num[i][k+1]=num[i][k];
		        			k-=1;
		        		}
		        		num[i][k+1]=key;
		        	}
			    }
			    printf("Gia tri cac phan tu theo dong tang dan la: \n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("%d\t",num[i][j]);
					}
					printf("\n");
				}
				break;
			case 3:
				for(int i=1;i<n;i++){
		        	for(int j=0;j<m;j++){
		        		int key = num[i][j];
		        		int k=i-1;
		        		while(k>=0 && key > num[k][j]){
		        			num[k+1][j]=num[k][j];
		        			k-=1;
		        		}
		        		num[k+1][j]=key;
		        	}
			    }
			    printf("Gia tri cac phan tu theo cot giam dan la: \n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("%d\t",num[i][j]);
					}
					printf("\n");
				}
				break;
			case 4:
	            exit(0);
	        default:
	        	printf("Vui long chon tu 1 den 4: ");
	    }
	} while(1==1);
}
