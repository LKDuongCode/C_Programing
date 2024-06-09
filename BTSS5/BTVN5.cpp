#include<stdio.h>
int main(){
	int date,month;
	printf("Moi ngai nhap vao ngay thang sinh: ");
	scanf("%d %d",&date,&month);
	if(month==3){
		if(date>=21){
			printf(" Bach Duong");
		}else{
			printf(" Song Ngu");
		}
	}else if(month==4){
		if(date>=21){
			printf("Kim Nguu");
		}else{
			printf(" Bach Duong");
		}
	}else if(month==5){
		if(date>=21){
			printf("Song Tu");
		}else{
			printf("Kim Nguu");
		}
	}else if(month==6){
		if(date>=22){
			printf(" Cu Giai");
		}else{
			printf("Song tu");
		}
	}else if(month==7){
		if(date>=23){
			printf("Su Tu");
		}else{
			printf("Cu Giai");
		}
	}else if(month==8){
		if(date>=23){
			printf("Xu Nu");
		}else{
			printf(" Su Tu");
		}
	}else if(month==9){
		if(date>23){
			printf(" Thien Binh");
		}else{
			printf("Xu nu");
		}
	}else if(month==10){
		if(date>=24){
			printf(" Bo Cap");
		}else{
			printf("Thien Binh");
		}
	}else if(month==11){
		if(date>=23){
			printf(" Nhan Ma");
		}else{
			printf(" Bo Cap");
		}
	}else if(month==12){
		if(date>=22){
			printf(" Ma Ket");
		}else{
			printf("Nhan Ma");
		}
	}else if(month==1){
		if(date>21){
			printf("Bao Binh");
		}else{
			printf(" Ma Ket");
		}
	}else if(month==2){
		if(date>21){
			printf("Song Ngu");
		}else{
			printf("Bao Binh");
		}
	}else{
		printf("Nhap sai");
	}
}
