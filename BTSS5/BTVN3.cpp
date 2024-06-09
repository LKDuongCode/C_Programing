#include<stdio.h>
int main(){
	float revenue,comMission;
	printf("Nhap vao doanh thu: ");
	scanf("%f",&revenue);
	if(revenue<=100000000){
		comMission=revenue*0.05;
	}else if(revenue>300000000){
		comMission=revenue*0.2;
	}else{
		comMission=revenue*0.1;
	}
	printf("Hoa hong la: %.1f",comMission);
}
