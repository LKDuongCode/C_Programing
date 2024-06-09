#include<stdio.h>
int main(){
	printf("Moi ngai nhap vao so diem cua HTML, CSS, JAVASCRIPT");
	float cssMark, javascriptMark, htmlMark;
	scanf("%f %f %f",&htmlMark,&cssMark,&javascriptMark);
	
	float avgMark=(htmlMark+javascriptMark+cssMark)/3;
	if (avgMark<5){
		printf("Diem yeu");
	} else if (avgMark>=5 && avgMark<7){
		printf("Diem trung binh"); 
	}  else if (avgMark>=7 && avgMark<8){
		printf("Diem kha"); 
	} else if (avgMark>=8 && avgMark<9){
		printf("Diem gioi"); 
	} else if (avgMark>=9 && avgMark<=10){
		printf("Diem xuat sac");
	}
	 
} 
