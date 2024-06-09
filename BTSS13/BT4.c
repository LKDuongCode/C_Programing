#include <stdio.h>
#include <string.h>
//Main
int main(){
    char inputString[100];
    printf("Nhap vao mot chuoi: ");
    gets(inputString);
    int n=strlen(inputString);
    int maxLength=0,currentLength=0;
    int start=0,currentStart=0;
    for (int i=0;i<n;i++){
        for (int j=currentStart;j<i;j++) {
            if (inputString[j]==inputString[i]) {
                currentStart=j+1;
                currentLength=i-j-1;
                break;
            }
        }
        currentLength++;
        if (currentLength>maxLength) {
            maxLength=currentLength;
            start=currentStart;
        }
    }
    printf("Chuoi ky tu phan biet dau tien co do dai lon nhat la %d: ", maxLength);
    for (int i=start;i<start+maxLength;i++) {
        printf("%c",inputString[i]);
    }
    printf("\n");
    return 0;
}


