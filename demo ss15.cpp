#include<stdio.h>
#include<string.h>
int main()
{
	// b1. khai bao cau truc dua vao doi tuong trong thuc te(ten struct phai viet hoa)
	// - xac dinh members trong cau truc(dua vao tinh chat cua doi tuong trong thuc te)
	struct Book
	{
		int id;
		char name[50];
		char author[20];
		int price;
	};
	// xay dung cac doi tuong thuoc Book
	struct Book book1 = {1,"Mat Biec","Nguyen Nhat Anh",100};
	struct Book book2 = {2,"O Long Vien","Unknow",50};
	struct Book book3 = {3,"DragonBall","Japanese",150};
	struct Book book4 = {4,"Death Note","Janpanese",200};
	
	//truy cap members (su dung cu phap: book1.id)
	printf("id = %d\n",book1.id);
	// co the su dung phep gan de gan lai gia tri(chi dung voi kieu du lieu nguyen thuy)
	
	printf("name = %s\n",book1.name);
	// cap nhat lai name( dung strcpy sao chep vao).
	strcpy (book1.name,"Toi thay hoa vang tren co xanh");
	// sau khi cap nhat
	printf("name sau khi update = %s\n",book1.name);
	
	printf("author = %s\n",book1.author);
	printf("price = %d\n",book1.price);
	
	struct Book book5;// no khong co gi
	book5 = book2; // cach gan 1
	memcpy(&book5,&book2,sizeof(struct Book));// cach gan 2
	
	printf("Book 5 name = %s\n",book2.name);
	
	return 0;
}
