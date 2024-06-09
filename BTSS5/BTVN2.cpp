#include<stdio.h>
int main(){
	float mCharges=25000;
	int minutes;
	float fee;
	printf("Moi ngai nhap vao so phuts su dung:");
	scanf("%d",&minutes);
	if (minutes<=50)
	{
		fee= mCharges+(minutes*600);
	}
	else if ( minutes>50 && minutes<=150)
	{
		fee= mCharges+(50*600)+((minutes-50)*400);
	}
	else if ( minutes>150 && minutes<=200)
	{
		fee=mCharges+ (50*600)+(150*400)+((minutes-200)*200);
	}
	else
	{
		fee=mCharges+ (50*600)+(150*400)+(200*200)+((minutes-400)*100);
	}
	printf("Tien dien thang nay cua ngai la: %f",fee);
}
