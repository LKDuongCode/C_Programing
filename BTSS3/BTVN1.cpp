#include<stdio.h>
#include<math.h>
int main(){
	float r;
	printf("Moi ngai nhap ban kinh vao:");
	scanf("%f",&r);
	const float PI = 3.14;
	float pCircle;
	pCircle=(r*2)*PI;
	float aCircle;
	aCircle=pow(r,2)*PI;
	printf("Chu vi cua hinh tron la: %f",pCircle);
	printf("Dien tich cua cua hinh tron la: %f",aCircle);
	
}
