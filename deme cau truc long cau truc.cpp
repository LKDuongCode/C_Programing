#include<stdio.h>
int main()
{
	struct Adress
	{
		int suite;
		char ward[50];
		char district[50];
		char province[50];
	};
	struct Student
	{
		int id;
		char name[50];
		struct Adress address;
	};
	
	struct Student s1 = {1,"Ming The",{10,"xa gg","phuong XX","TP Noi Ha"}};
	printf("Nha cua Ming o: %d\n",s1.address.suite);
	
	return 0;
}
