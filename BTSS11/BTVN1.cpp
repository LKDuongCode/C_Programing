#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,num[n];
    do{
    	printf("*****************************MENU***************************\n");
    	printf("1. In ra cac gia tri phan tu trong mang\n");
    	printf("2. Su dung Insertion Sort sap xep mang giam dan va in ra\n");
    	printf("3. Su dung Selection Sort sap xep mang tang dan va in ra\n");
    	printf("4. Su dung Bubble Sort sap xep mang giam dan va in ra\n");
    	printf("5. Thoat\n");
    	printf("Lua chon cua ban");
    	int choice;
    	scanf("%d",&choice);
    	switch(choice){
    		case 1:
    			int n;
    			printf("Nhap so phan tu cua mang: ");
	            scanf("%d",&n);
    			for(int i=0; i<n; i++){
	            	printf("num[%d]=",i);
	            	scanf("%d", &num[i]); 
            	} 
            	printf("gia tri cac phan tu trong mang la:\n");
	            for(int i=0; i<n; i++){
		            printf("%d\t", num[i]); 
	            } 
	            printf("\n"); 
    			break;
    		case 2:
                for(int i=1;i<n;i++){
		  			int key=num[i];
		  			int j=i-1;
		  			while(j>=0 && num[j]<key){
		  				num[j+1]=num[j];
		  				j=j-1;
		  			}
		  			num[j+1]=key;
		  		}
		  		printf("Mang sau khi duoc sap xep giam dan la: \n");
		  		for(int i=0;i<n;i++){
		            printf("%d ",num[i]);
		        }
    			break;
    		case 3:
                for(int i=0;i<n-1;i++){
                    for(int j=i+1;j<n;j++){
                        if (num[i]>num[j]){
                            int temp = num[i]; 
                            num[i] = num[j]; 
                            num[j] = temp;
                        }
                    }
                }
                printf("Mang sau khi da sap xep tang dan:\n"); 
                for (int i=0;i<n;i++) {
                    printf("%d\t",num[i]);
                } 
    			break;
    		case 4:
    			printf("gia tri cac phan tu trong mang la:\n");
	            for(int i=0; i<n; i++){
		            printf("%d\t", num[i]); 
	            } 
	            printf("\n"); 
    			for(int i=0;i<n-1;i++){
                    for(int j=0;j<n-i-1;j++){
                        if(num[j]>num[j+1]){
                            int temp = num[j];
                            num[j] = num[j+1]; 
                            num[j+1] = temp;
                        }
                    }
                }
                printf("Mang sau khi da sap xep tang dan:\n"); 
                for(int i=0;i<n;i++){
                    printf("%d\t", num[i]);
                }
    			break;
    		case 5:
    			exit(0);
    		default:
    			printf("Vui long chon tu 1 den 5: ");
	    }
    } while(1==1);
}
