#include<stdio.h>
#include<math.h>
int main ()
{
	float a,b,c;
	printf(" Moi ngai nhap vao ba so a b c:");
	scanf("%f %f %f",&a,&b,&c);
	float deltal=(b*b)-(4*a*c);
	if (deltal<0)
	{ 
		printf("Phuong trinh vo nghiem!");
	}
	float x1,x2;
	x1= (-b+sqrt(deltal) )/(2*a);
	x2=(-b-sqrt(deltal))/(2*a);
	if (deltal==0)
	{
		printf("phuong trinh co nghiem kep: %f",x1);
	}
	if (deltal>0)
	{
		printf("phuong trinh co hai nghiem phan biet: %f\n %f",x1,x2);
	}
 } 
