#include <stdio.h>
int main(){
    int triE1, triE2,triE3;
    printf("Moi ngai nhap vao ba canh tam giac: ");
    scanf("%d%d%d",&triE1,&triE2,&triE3);
        if ((triE1 == triE2)&&(triE1==triE3))
        {
            printf("tam giac deu");
        }
        else if (((triE1 * triE1 + triE2 * triE2 == triE3 * triE3)&&(triE1==triE2)) || ((triE1 * triE1 + triE3 * triE3==triE2 * triE2)&&(triE1==triE3)) || ((triE3 * triE3 + triE2 * triE2 == triE1 * triE1)&&(triE2==triE3)))
        {
            printf("tam giac vuong can ");
        }
        else if (triE1 == triE2 || triE1 == triE3 || triE2 == triE3)
        {
            printf("tam giac can");
        }
        else if ((triE1 * triE1 + triE2 * triE2 == triE3 * triE3) || (triE1 * triE1 + triE3 * triE3==triE2 * triE2) || (triE3 * triE3 + triE2 * triE2 == triE1 * triE1))
        {
            printf("Tam giac vuong");
        }
        else if (triE1+triE2==triE3)
        {
        	printf("tam giac thuong");
		}
}
