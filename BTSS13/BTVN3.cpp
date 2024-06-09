#include<stdio.h>
#include<string.h>
int main()
{
	// khai bao chuoi str gioi han 100 ki tu va mang count voi 100 phan tu 
	char str[100];
	int count[100] = {0},cout;
	// nhap vao chuoi ki tu
	printf("Nhap vao 1 chuoi: ");
	scanf("%s",&str);
	// duyet tu chi so 0 den het chieu dai cua chuoi
	for(int i=0;i<strlen(str);i++){
		cout=1;// lan xuat hien
		
		for(int j=i+1;j<strlen(str);j++)
		{
			if(str[i]==str[j])
			{
				cout++;
				count[j]=1;// dung de danh dau trong mang count, tranh dem lai. khi in ra thi no chi doc chu cai nen se bo qua so.
			}
		}
		if(count[i]==0){
			printf("%c: %d\n",str[i],cout);
		}
	}
}
	

