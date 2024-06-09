#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool checkCharExist(char str[100], char a){
	for(int i=0; str[i]!='\0'; i++){
		if(str[i] == a){
			return true;
		}
	}
	return false;
}

int main(){
	char str[] = "abcdacbcccabcdefg";
	char tempStr[100];
	char maxStr[100];
	int tempIndex;
	int maxIndex = 0;
	for(int i=0; i<7; i++){
		strcpy(tempStr, "");
		tempStr[0] = str[i];
		tempIndex = 1;
		for(int j=i+1; j<7; j++){
			if(checkCharExist(tempStr, str[j])){
				break;
			}
			tempStr[tempIndex] = str[j];
			tempIndex++;
		}
		if(tempIndex>maxIndex){
			maxIndex = tempIndex;
			strcpy(maxStr, tempStr);
		}
	}
	printf("%s", maxStr);
}


