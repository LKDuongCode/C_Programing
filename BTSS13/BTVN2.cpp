#include <stdio.h>
#include <string.h>
int main()
{
	char newChar, oldChar;
	int temp; 
    char str[100];
    do
    {
        int count = 0;
        char findValue, delValue;
        printf("-------------------------------Menu---------------------------------\n");
        printf("1.Nhap vao chuoi ky tu\n");
        printf("2.In ra noi dung chuoi vua nhap\n");
        printf("3.Nhap vao 1 ky tu, dem so lan xuat hien cua ky tu trong chuoi\n");
        printf("4.Nhap vao 2 ky tu, thay the cac ky tu thu hai thanh ky tu thu nhat\n");
        printf("5.Nhap vao 1 ky tu,xoa bo cac ky tu trong chuoi\n");
        printf("6.Thoat\n");
        int choice;
        printf("lua chon cua ban\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Nhap ky tu:\n");
            scanf("%s", &str);
            break;
        case 2:
        	printf("noi dung chuoi la:");
        	puts(str);
        	break;
        case 3:
            count = 0;
            printf("Nhap ky tu can tim ");
            scanf("%c", &findValue);
            for (int i = 0; i < strlen(str); i++)
            {
                if (str[i] == findValue)
                {
                    count++;
                }
            }
            printf("So lan xuat hien cua ki tu %c trong chuoi la %d",findValue, count);
            break;
        case 4:
            printf("Nhap ky tu muon thay:");
            scanf("%c", &oldChar);
            printf("Nhap ki tu moi:");
            scanf("%c",&newChar);
             for(int i = 0; i < strlen(str); i++) 
			 {
        		if(str[i] == oldChar) 
				{
            		str[i] = newChar;
        		}
    		}
            break;
        case 5:
        	temp = 0; 
            printf("Nhap ky tu can xoa ");
            scanf("%c", &delValue);
            for(int i = 0; i < strlen(str); i++) 
			{
    			if(str[i] != delValue) 
				{
       				str[temp] = str[i];
					temp++; 
    			}
			}
			str[temp] = '\0';// danh dau end chuoi  
			printf("Chuoi sau khi xoa la:\n %s",str);

            break;
        default:
        	printf("khong hop le.");
        	break;
        }
    } while (1 == 1);
}
