#include<stdio.h>
int main ()
{
	int a = 0;
	
	while(1)
	{
		if(!a)
		{
			printf("menu dang nhap\n");
			while(1)
			{
				int select;
				printf("\nmoi nhap;");
				scanf("%d",&select);
				switch(select)
				{
					case 1:
						printf("login case 1\n");
						break;
					case 2:
						printf("login thanh cong\n");
						a = 1;
						break;
					case 3:
						return 0;
						
				}
				break;
			}
		}
		else
		{
			do
			{
				printf("main menu\n");
				int choice;
				printf("nhap lua chon:");
				scanf("%d",&choice);	
				switch(choice)
				{
					case 1:
						printf("case1\n");
						break;
					case 2:
						
						printf("case2\n");
						break;
					case 3:
						a = 0;
						break;
				}
				break;
			}while(1);
		}
	}
}
