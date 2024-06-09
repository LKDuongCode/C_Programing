#include<stdio.h>
int main(){
	float mathM, literatureM, englishM;
	printf("Hay nhap diem toan van va tieng anh"); 
	scanf("%f\n %f\n %f",&mathM, &literatureM, &englishM);
	printf("Diem toan %2f - Diem van %2f - Diem anh %2f\n", mathM,literatureM,englishM);
	float sumMark;
	sumMark=mathM+literatureM+englishM;
	printf("Tong diem %f\n",sumMark);
	float averageMark;
	averageMark=sumMark/3;
	printf("Diem trung binh ba mon %f",averageMark); 
}
