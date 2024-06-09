#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,num[n],i,searchValue;
	int countFind=0;
	int end=n-1,start=0,mid;
	do{
		printf("**************************MENU***********************\n");
		printf("1. In ra cac phan tu cua mang\n");
		printf("2. Cac gia tri trong phan tu trong mang co gia tri bang gia tri tim kiem\n");
		printf("3. Tim kiem nhi phan tung phan tu trong mang\n");
		printf("4. Thoat\n");
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
				printf("Nhap vao 1 so thong ke trong bang: ");
				scanf("%d",&searchValue);
				for(int i=0;i<n;i++){
					if(num[i]==searchValue){
						countFind++;
					}
				}
		        if(countFind>0){
	                printf("Tim thay phan tu co chi so %d trong mang co gia tri la %d\n",i,searchValue);
	            } else{
	              	printf("Khong tim thay phan tu nao co chi so la %d\n",searchValue);
               	}
				break;
			case 3:
				printf("Nhap gia tri tim kiem: ");
		     	scanf("%d",&searchValue);
			    for(i=start;i<=end;i++){
				    mid=(end+start)/2;
				    if(num[mid]==searchValue){
					   break;
				    }else if(num[mid]<searchValue){
					    end=mid-1;
				    }else{
				     	start=mid+1;
				    }
			    }
		    	if(num[mid]==searchValue){
                	printf("Tim thay phan tu co chi so %d trong mang co gia tri la %d\n",mid,num[mid]);
             	} else{
	            	printf("khong tim thay phan tu co gia tri la: %d",searchValue);
            	}
				break;
			case 4:
				exit(0);
			default:
				printf("Vui long chon tu 1 den 4: ");
		}
	} while(1==1);
}
