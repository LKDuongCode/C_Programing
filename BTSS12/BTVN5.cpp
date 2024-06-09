#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int testPrime(int a){
	if(a<2){
		return 0;
	}
	for(int i=2; i<=sqrt(a);i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n,m;
	printf("Nhap so hang va so cot: ");
	scanf("%d %d",&n,&m);
	int num[n][m];
	do{
		printf("**************************MENU*****************************\n");
		printf("1. Nhap cac gia tri phan tu cua mang\n");
		printf("2. In ra cac phan tu cua mang theo ma tran\n");
		printf("3. In ra cac phan tu goc theo ma tran\n");
		printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
		printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu cua ma tran\n");
		printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
		printf("7. Thoat\n");
		printf("Lua chon cua ban");
		int choice;
		scanf("%d",&choice);
		switch(choice){
		    case 1:
			    for(int i=0;i<n;i++){
				    for(int j=0;j<m;j++){
					    printf("num[%d][%d]= ",i,j);
					    scanf("%d",&num[i][j]);
			    	}
			    }
		    	break;
		    case 2:
		    	printf("In gia tri cac phan tu trong mang: :\n");
				for (int i=0;i<n;i++)
				{
					for(int j=0;j<m;j++)
					{
						printf("%d",num[i][j]);
					}
					printf("\n");
				} 
			    break;
		    case 3:
		    	for(int i=0;i<n;i++){
                	for(int j=0;j<m;j++){
                		if(i==0&&j==0||i==0&&j==m-1||j==0&&i==n-1||j==m-1&&i==n-1){
                			printf("%d\t",num[i][j]);
						}
                	}
                	printf("\n");
                }
			    break;
		    case 4:
		    	printf("Cac phan tu nam tren duong bien: \n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(i==0||i==n-1||j==0||j==m-1){
							printf("%d\t",num[i][j]);
						}
					}
				}
			    break;
		    case 5:
		    	if(n==m){
				    printf("Cac phan tu nam tren duong cheo chinh:\n");
				    for(int i=0;i<n;i++){
					    for(int j=0;j<m;j++){
					    	if(i==j){
					    		printf("%d\t",num[i][j]);
					    	}
					    }
					}
				    printf("Cac phan tu nam tren duong cheo phu la:\n");
					for(int i=0;i<n;i++){
					    for(int j=0;j<m;j++){
					    	if(i+j==n-1){
					    		printf("%d\t",num[i][j]);
					    	}
					    }
					}
				} else{
					printf("Day khong phai ma tran vuong, ko co cheo chinh va phu:\n");
				}
			    break;
		    case 6:
		    	for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(testPrime(num[i][j])){
							printf("%d la so nguyen to \n",num[i][j]);
						}
					}
				}
			    break;
		    case 7:
			    exit(0);
		    default:
			    printf("Vui long chon tu 1 den 7: ");
		}
	} while(1==1);
}
