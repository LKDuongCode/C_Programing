	#include<stdio.h>
	#include<stdlib.h>
	int arrageArray(int number[],int n)
	{
		for(int i=1;i<n;i++)
		{
			if(number[i]<number[i-1])
			{
				return 0;
			}
		}
		return 1;
	}
	int main()
	{
		int number[100],numberElement=0,n;
		int mid;
		int start;
		int end;
		int choice;
		do
		{
			printf("\t\tMENU\t\t\n");
			printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
			printf("2. In gia tri cac phan tu dang quan ly\n");
			printf("3. Them phan tu vao vi tri chi dinh\n");
			printf("4. Sua phan tu o vi tri chi dinh\n");
			printf("5. Xoa mot phan tu o vi tri chi dinh\n");
			printf("6. Sap xep cac phan tu\n");
			printf("7. Giam dan\n");
			printf("8. Tang dan\n");
			printf("9. Tim kiem phan tu nhap vao\n");
			printf("10. Thoat\n");
			printf("Lua chon cua ban la: ");
			scanf("%d",&choice);
			switch(choice)
			{
				case 1:
					printf("Nhap so phan tu can nhap: ");
					scanf("%d",&n);
					numberElement+=n;
					for(int i=numberElement-n;i<numberElement;i++)
					{
						printf("number[%d] = ",i);
						scanf("%d",&number[i]);
					}
					break;
				case 2: 
					for(int i=0;i<numberElement;i++)
					{
						printf("number[%d] = %d\n",i,number[i]);
					}
					break;
				case 3:
					int indexNumber, indexLocation;
					printf("Nhap vi tri muon chen: ");
					scanf("%d",&indexLocation);
					printf("Nhap so muon them: ");
					scanf("%d",&indexNumber);
					if (indexLocation < 0 || indexLocation > numberElement) 
					{
	        			printf("Vi tri chen khong hop le.\n");
	   			 	}
					else
					{
						for(int i=numberElement;i>indexLocation;i--)
						{
							number[i]=number[i-1];
						}
						number[indexLocation] = indexNumber;
				        numberElement++;
					}
					for(int i=0;i<numberElement;i++)
					{
						printf("number[%d] = %d\n",i,number[i]);
					}
					break;
				case 4:
					int updateNumber,updateLocation;
					printf("Nhap vi tri muon sua: ");
					scanf("%d",&updateLocation);
					printf("Nhap so sau khi sua: ");
					scanf("%d",&updateNumber);
					if (updateLocation < 0 || updateLocation >= numberElement) 
					{
	        			printf("Vi tri sua khong hop le.\n");
	    			}
					else
					{
	    				number[updateLocation]=updateNumber;
						for(int i=0;i<numberElement;i++)
						{
							printf("number[%d] = %d\n",i,number[i]);
						}
					}
					break;
				case 5:
					int deleteLocation;
					printf("Nhap vi tri can xoa: ");
					scanf("%d",&deleteLocation);
					if (deleteLocation < 0 || deleteLocation >= numberElement) 
					{
        				printf("Vi tri xoa khong hop le.\n");
        			}
					else
					{
						for(int i=deleteLocation;i<numberElement;i++)
						{
							number[i]=number[i+1];
						}
					}
					numberElement--;
					for(int i=0;i<numberElement;i++)
					{
						printf("number[%d] = %d\n",i,number[i]);
					}
					break;
				case 6:
					int choose;
					printf("1. Giam dan\n");
					printf("2. Tang dan\n");
					printf("Lua chon cua ban la: ");
					scanf("%d",&choose);
					switch(choose)
					{
						case 1:
							for(int i=0;i<numberElement-1;i++)
							{
								for(int j=i+1;j<numberElement;j++)
								{
									if(number[i]<number[j])
									{
										int temp=number[i];
										number[i]=number[j];
										number[j]=temp;
									}
								}
							}
						for(int i=0;i<numberElement;i++)
						{
							printf("number[%d] = %d\n",i,number[i]);
						}
						break;
						case 2:
							for(int i=0;i<numberElement-1;i++)
							{
								for(int j=i+1;j<numberElement;j++)
								{
									if(number[i]>number[j])
									{
										int temp=number[i];
										number[i]=number[j];
										number[j]=temp;
									}
								}
							}
						for(int i=0;i<numberElement;i++)
						{
							printf("number[%d] = %d\n",i,number[i]);
						}
						break;		
					}
				break;
				case 7:
					for(int i=0;i<numberElement-1;i++)
					{
						for(int j=i+1;j<numberElement;j++)
						{
							if(number[i]<number[j])
							{
								int temp=number[i];
								number[i]=number[j];
								number[j]=temp;
							}
						}
					}
					for(int i=0;i<numberElement;i++)
					{
						printf("number[%d] = %d\n",i,number[i]);
					}
					break;
				case 8:
					for(int i=0;i<numberElement-1;i++)
					{
						for(int j=i+1;j<numberElement;j++)
						{
							if(number[i]>number[j])
							{
								int temp=number[i];
								number[i]=number[j];
								number[j]=temp;
							}
						}
					}
					for(int i=0;i<numberElement;i++)
					{
						printf("number[%d] = %d\n",i,number[i]);
					}
					break;
				case 9:
					int searchValue;
					end=numberElement;
					start=0;
					printf("Nhap so can tim: ");
					scanf("%d",&searchValue);
					if(arrageArray(number,numberElement))
					{
						printf("Su dung tim kiem nhi phan\n");
						for(int i=start; i<=end;i++)
						{
							mid=(start+end)/2;
							if(mid==searchValue)
							{
									break;
							}
							else if(mid<searchValue)
							{
								start=mid+1;
							}
							else
							{
								end=mid-1;
							}
						}
						printf("%d o vi tri %d cua mang\n",searchValue,mid-1);
					}
					else
					{
						printf("Su dung tim kiem tuyen tinh\n");
						for(int i=0;i<numberElement;i++)
						{
							if(number[i]==searchValue)
							{
								printf("%d o vi tri %d cua mang",searchValue,i);
								break;
							}
						}
					}	
					break;
				case 10:
					exit(0);
				default:
					printf("Lua chon khong hop le");
			}
		}while(1==1);
	}
	
